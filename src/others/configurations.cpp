#include "configurations.hpp"

#include <string>
#include <regex>

#ifdef _WIN32
#include <ws2tcpip.h>
#else
#include <arpa/inet.h>
#include <sys/socket.h>
#endif

#include <wx/string.h>

using namespace std;

template<typename T>
constexpr inline uint64_t strhash(const T* str, int h = 0)
{
	return str[h] ? (strhash(str, h + 1) * 5) ^ static_cast<uint64_t>(str[h]) : 4096;
}

bool is_valid_domain(const std::string &input_string)
{
	static const regex pattern{"^(?!-)[A-Za-z0-9-]+([\\-\\.]{1}[a-z0-9]+)*\\.[A-Za-z]{2,6}$"};

	if (input_string.empty())
	{
		return false;
	}

	return regex_match(input_string, pattern);
}

bool is_valid_ip(const std::string &input_string)
{
	char buffer[16]{};

	return inet_pton(AF_INET, input_string.c_str(), buffer) > 0 || inet_pton(AF_INET6, input_string.c_str(), buffer) > 0;
}

std::string bandwidth_seletion_to_string(int input_bandwidth, int selected_value)
{
	std::string bandwidth;

	switch (selected_value)
	{
	case 0:	// bps
		bandwidth = std::to_string(input_bandwidth);
		break;
	case 1:	// B/s
		bandwidth = std::to_string(input_bandwidth * 8);
		break;
	case 2:	// Kbps
		bandwidth = std::to_string(input_bandwidth) + "K";
		break;
	case 3:	// KB/s
		bandwidth = std::to_string(input_bandwidth * 8) + "K";
		break;
	case 4:	// Mbps
		bandwidth = std::to_string(input_bandwidth) + "M";
		break;
	case 5:	// MB/s
		bandwidth = std::to_string(input_bandwidth * 8) + "M";
		break;
	case 6:	// Gbps/s
		bandwidth = std::to_string(input_bandwidth) + "G";
		break;
	case 7:	// GB/s
		bandwidth = std::to_string(input_bandwidth * 8) + "G";
		break;
	default:
		break;
	}

	return bandwidth;
}

std::string encryption_selection_to_string(int selected_value)
{
	std::string encryption_algorithm;

	switch (selected_value)
	{
	case 0:
		break;
	case 1:
		encryption_algorithm = "AES-GCM";
		break;
	case 2:
		encryption_algorithm = "AES-OCB";
		break;
	case 3:
		encryption_algorithm = "chacha20";
		break;
	case 4:
		encryption_algorithm = "xchacha20";
		break;
	default:
		break;
	}

	return encryption_algorithm;
}

std::string steps_kcp_profile_to_string(int selected_value)
{
	std::string kcp_profile;

	switch (selected_value)
	{
	case 0:
		kcp_profile = "fast3";
		break;
	case 1:
		kcp_profile = "fast4";
		break;
	case 2:
		kcp_profile = "regular4";
		break;
	case 3:
		kcp_profile = "regular5";
		break;
	default:
		break;
	}

	return kcp_profile;
}

std::string full_kcp_profile_to_string(int selected_value)
{
	std::string kcp_profile;

	switch (selected_value)
	{
	case 0:
		kcp_profile = "fast1";
		break;
	case 1:
		kcp_profile = "fast2";
		break;
	case 2:
		kcp_profile = "fast3";
		break;
	case 3:
		kcp_profile = "fast4";
		break;
	case 4:
		kcp_profile = "fast5";
		break;
	case 5:
		kcp_profile = "fast6";
		break;
	case 6:
		kcp_profile = "regular1";
		break;
	case 7:
		kcp_profile = "regular2";
		break;
	case 8:
		kcp_profile = "regular3";
		break;
	case 9:
		kcp_profile = "regular4";
		break;
	case 10:
		kcp_profile = "regular5";
		break;
	case 11:
		kcp_profile = "manual";
		break;
	default:
		break;
	}

	return kcp_profile;
}

user_settings userinput_kcp_profile_get_settings(int selected_value)
{
	user_settings current_settings;

	switch (selected_value)
	{
	case 0:	// fast1
		current_settings.kcp_nodelay = 1;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 2;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 2048;
		current_settings.kcp_rcvwnd = 2048;
		break;
	case 1:	// fast2
		current_settings.kcp_nodelay = 2;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 2;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 2048;
		current_settings.kcp_rcvwnd = 2048;
		break;
	case 2:	// fast3
		current_settings.kcp_nodelay = 1;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 3;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 2048;
		current_settings.kcp_rcvwnd = 2048;
		break;
	case 3:	// fast4
		current_settings.kcp_nodelay = 2;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 3;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 2048;
		current_settings.kcp_rcvwnd = 2048;
		break;
	case 4:	// fast5
		current_settings.kcp_nodelay = 1;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 4;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 2048;
		current_settings.kcp_rcvwnd = 2048;
		break;
	case 5:	// fast6
		current_settings.kcp_nodelay = 2;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 4;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 2048;
		current_settings.kcp_rcvwnd = 2048;
		break;
	case 6:	// regular1
		current_settings.kcp_nodelay = 1;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 5;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 1024;
		current_settings.kcp_rcvwnd = 1024;
		break;
	case 7:	// regular2
		current_settings.kcp_nodelay = 2;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 5;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 1024;
		current_settings.kcp_rcvwnd = 1024;
		break;
	case 8:	// regular3
		current_settings.kcp_nodelay = 0;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 2;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 1024;
		current_settings.kcp_rcvwnd = 1024;
		break;
	case 9:	// regular4
		current_settings.kcp_nodelay = 0;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 3;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 1024;
		current_settings.kcp_rcvwnd = 1024;
		break;
	case 10:	// regular5
		current_settings.kcp_nodelay = 0;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 0;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 1024;
		current_settings.kcp_rcvwnd = 1024;
		break;
	default:
		current_settings.kcp_nodelay = 1;
		current_settings.kcp_interval = 1;
		current_settings.kcp_resend = 2;
		current_settings.kcp_nc = 1;
		current_settings.kcp_sndwnd = 32;
		current_settings.kcp_rcvwnd = 32;
		break;
	}

	return current_settings;
}

void parse_from_args(const std::vector<std::string> &args, std::vector<std::string> &error_msg)
{
	user_settings current_user_settings;
	error_msg.clear();

	if (std::vector<std::string> error_messages = parse_running_mode(args, current_user_settings);
		!error_messages.empty())
	{
		error_msg.insert(error_msg.end(),
			std::make_move_iterator(error_messages.begin()),
			std::make_move_iterator(error_messages.end())
		);
		return;
	}

	if (std::vector<std::string> error_messages = parse_the_rest(args, current_user_settings);
		!error_messages.empty())
	{
		error_msg.insert(error_msg.end(),
			std::make_move_iterator(error_messages.begin()),
			std::make_move_iterator(error_messages.end())
		);
		return;
	}

	check_settings(current_user_settings, error_msg);

	return;
}

std::vector<std::string> parse_running_mode(const std::vector<std::string> &args, user_settings &current_user_settings)
{
	std::vector<std::string> error_messages;
	uint16_t count = 0;

	for (const std::string &arg : args)
	{
		wxString trim_copy, lower_copy;
		wxString trim_copy_arg = arg;
		auto line = trim_copy_arg.Trim().ToStdString();
		if (line.empty() || line[0] == '#')
			continue;
		auto eq = line.find_first_of("=");
		if (eq == std::string::npos) continue;

		std::string name = line.substr(0, eq);
		std::string value = line.substr(eq + 1);

		trim_copy = name;
		trim_copy.Trim();
		name = trim_copy.ToStdString();

		trim_copy = value;
		trim_copy.Trim();
		value = trim_copy.ToStdString();

		std::string original_value = value;
		lower_copy = name;
		name = lower_copy.MakeLower().ToStdString();
		lower_copy = value;
		value = lower_copy.MakeLower().ToStdString();

		if (value.empty())
			continue;

		try
		{
			switch (strhash(name.c_str()))
			{
			case strhash("mode"):
			{
				switch (strhash(value.c_str()))
				{
				case strhash("server"):
					current_user_settings.mode = running_mode::server;
					break;
				case strhash("client"):
					current_user_settings.mode = running_mode::client;
					break;
				case strhash("relay"):
					current_user_settings.mode = running_mode::relay;
					break;
				default:
					current_user_settings.mode = running_mode::unknow;
					error_messages.emplace_back("invalid mode: " + value);
					break;
				}
				count++;
				break;
			}
			default:
				break;
			}
		}
		catch (const std::exception &ex)
		{
			error_messages.emplace_back("invalid input: '" + arg + "'" + ", " + ex.what());
		}
	}

	if (count == 0)
		error_messages.emplace_back("running mode is not set");

	if (count > 1)
		error_messages.emplace_back("Too many 'mode=' in configuration file.");

	return error_messages;
}

std::vector<std::string> parse_the_rest(const std::vector<std::string> &args, user_settings &current_user_settings)
{
	std::vector<std::string> error_msg;

	user_settings *current_settings = &current_user_settings;

	for (const std::string &arg : args)
	{
		wxString trim_lower_copy;
		wxString trim_copy_arg = arg;
		auto line = trim_copy_arg.Trim().ToStdString();
		if (line.empty() || line[0] == '#')
			continue;
		auto eq = line.find_first_of("=");
		std::string name = line.substr(0, eq);
		trim_lower_copy = name;
		trim_lower_copy.Trim();
		trim_lower_copy.MakeLower();
		name = trim_lower_copy.ToStdString();

		std::string value;
		std::string original_value;
		if (eq == std::string::npos)
		{
			if (line[0] != '[' || line[line.length() - 1] != ']')
			{
				error_msg.emplace_back("unknow option: " + arg);
				continue;
			}
		}
		else
		{
			wxString trim_copy, lower_copy;
			trim_copy = line.substr(eq + 1);
			value = trim_copy.Trim().ToStdString();
			original_value = value;
			value = trim_copy.MakeLower().ToStdString();

			if (value.empty())
				continue;
		}

		try
		{
			wxString trim_copy;
			switch (strhash(name.c_str()))
			{
			case strhash("mode"):
				break;

			case strhash("listen_on"):
				current_settings->listen_on = original_value;
				break;

			case strhash("listen_port"):
				if (auto pos = value.find("-"); pos == std::string::npos)
				{
					if (auto port_number = std::stoi(value); port_number > 0 && port_number < USHRT_MAX)
						current_settings->listen_port = static_cast<uint16_t>(port_number);
					else
						error_msg.emplace_back("invalid listen_port number: " + value);
				}
				else
				{
					std::string start_port = value.substr(0, pos);
					std::string end_port = value.substr(pos + 1);
					trim_copy = start_port;
					start_port = trim_copy.Trim().ToStdString();
					trim_copy = end_port;
					end_port = trim_copy.Trim().ToStdString();

					if (start_port.empty() || end_port.empty())
					{
						error_msg.emplace_back("invalid listen_port range: " + value);
						break;
					}

					if (auto port_number = std::stoi(start_port); port_number > 0 && port_number < USHRT_MAX)
						current_settings->listen_port_start = static_cast<uint16_t>(port_number);
					else
						error_msg.emplace_back("invalid listen_port_start number: " + start_port);

					if (auto port_number = std::stoi(end_port); port_number > 0 && port_number < USHRT_MAX)
						current_settings->listen_port_end = static_cast<uint16_t>(port_number);
					else
						error_msg.emplace_back("invalid listen_port_end number: " + end_port);
				}
				break;

			case strhash("dport_refresh"):	// only for client and relay
				if (auto time_interval = std::stoi(value); time_interval >= 0 && time_interval <= SHRT_MAX)
					current_settings->dynamic_port_refresh = static_cast<int16_t>(time_interval);
				else if (time_interval > SHRT_MAX)
					current_settings->dynamic_port_refresh = SHRT_MAX;
				break;

			case strhash("destination_port"):
				if (auto pos = value.find("-"); pos == std::string::npos)
				{
					if (auto port_number = std::stoi(value); port_number > 0 && port_number < USHRT_MAX)
						current_settings->destination_port = static_cast<uint16_t>(port_number);
					else
						error_msg.emplace_back("invalid listen_port number: " + value);
				}
				else
				{
					std::string start_port = value.substr(0, pos);
					std::string end_port = value.substr(pos + 1);
					trim_copy = start_port;
					start_port = trim_copy.Trim().ToStdString();
					trim_copy = end_port;
					end_port = trim_copy.Trim().ToStdString();

					if (start_port.empty() || end_port.empty())
					{
						error_msg.emplace_back("invalid destination_port range: " + value);
						break;
					}

					if (auto port_number = std::stoi(start_port); port_number > 0 && port_number < USHRT_MAX)
						current_settings->destination_port_start = static_cast<uint16_t>(port_number);
					else
						error_msg.emplace_back("invalid destination_port_start number: " + start_port);

					if (auto port_number = std::stoi(end_port); port_number > 0 && port_number < USHRT_MAX)
						current_settings->destination_port_end = static_cast<uint16_t>(port_number);
					else
						error_msg.emplace_back("invalid destination_port_end number: " + end_port);
				}
				break;


			case strhash("destination_address"):
				current_settings->destination_address = value;
				break;

			case strhash("encryption_password"):
				current_settings->encryption_password = original_value;
				break;

			case strhash("encryption_algorithm"):
				switch (strhash(value.c_str()))
				{
				case strhash("none"):
					current_settings->encryption = encryption_mode::none;
					break;
				case strhash("aes-gcm"):
					current_settings->encryption = encryption_mode::aes_gcm;
					break;
				case strhash("aes-ocb"):
					current_settings->encryption = encryption_mode::aes_ocb;
					break;
				case strhash("chacha20"):
					current_settings->encryption = encryption_mode::chacha20;
					break;
				case strhash("xchacha20"):
					current_settings->encryption = encryption_mode::xchacha20;
					break;
				default:
					current_settings->encryption = encryption_mode::unknow;
					error_msg.emplace_back("encryption_algorithm is incorrect: " + value);
					break;
				}
				break;

			case strhash("kcp"):
				switch (strhash(value.c_str()))
				{
				case strhash("manual"):
					current_settings->kcp_setting = kcp_mode::manual;
					break;
				case strhash("regular1"):
					current_settings->kcp_setting = kcp_mode::regular1;
					break;
				case strhash("regular2"):
					current_settings->kcp_setting = kcp_mode::regular2;
					break;
				case strhash("regular3"):
					current_settings->kcp_setting = kcp_mode::regular3;
					break;
				case strhash("regular4"):
					current_settings->kcp_setting = kcp_mode::regular4;
					break;
				case strhash("regular5"):
					current_settings->kcp_setting = kcp_mode::regular5;
					break;
				case strhash("fast1"):
					current_settings->kcp_setting = kcp_mode::fast1;
					break;
				case strhash("fast2"):
					current_settings->kcp_setting = kcp_mode::fast2;
					break;
				case strhash("fast3"):
					current_settings->kcp_setting = kcp_mode::fast3;
					break;
				case strhash("fast4"):
					current_settings->kcp_setting = kcp_mode::fast4;
					break;
				case strhash("fast5"):
					current_settings->kcp_setting = kcp_mode::fast5;
					break;
				case strhash("fast6"):
					current_settings->kcp_setting = kcp_mode::fast6;
					break;
				default:
					current_settings->kcp_setting = kcp_mode::unknow;
					error_msg.emplace_back("invalid kcp setting: " + value);
					break;
				}
				break;

			case strhash("kcp_mtu"):
				current_settings->kcp_mtu = std::stoi(value);
				break;

			case strhash("kcp_sndwnd"):
				current_settings->kcp_sndwnd = std::stoi(value);
				break;

			case strhash("kcp_rcvwnd"):
				current_settings->kcp_rcvwnd = std::stoi(value);
				break;

			case strhash("kcp_nodelay"):
				current_settings->kcp_nodelay = std::stoi(value);
				break;

			case strhash("kcp_interval"):
				current_settings->kcp_interval = std::stoi(value);
				break;

			case strhash("kcp_resend"):
				current_settings->kcp_resend = std::stoi(value);
				break;

			case strhash("kcp_nc"):
			{
				bool yes = value == "yes" || value == "true" || value == "1";
				current_settings->kcp_nc = yes;
				break;
			}

			case strhash("udp_timeout"):
				if (auto time_interval = std::stoi(value); time_interval <= 0 || time_interval > USHRT_MAX)
					current_settings->udp_timeout = 0;
				else
					current_settings->udp_timeout = static_cast<uint16_t>(time_interval);
				break;

			case strhash("keep_alive"):
				if (auto time_interval = std::stoi(value); time_interval <= 0)
					current_settings->keep_alive = 0;
				else if (time_interval > 0 && time_interval < USHRT_MAX)
					current_settings->keep_alive = static_cast<uint16_t>(time_interval);
				else
					current_settings->keep_alive = USHRT_MAX;
				break;

			case strhash("mux_tunnels"):
				if (auto time_interval = std::stoi(value); time_interval <= 0)
					current_settings->mux_tunnels = 0;
				else if (time_interval > 0 && time_interval < USHRT_MAX)
					current_settings->mux_tunnels = static_cast<uint16_t>(time_interval);
				else
					current_settings->mux_tunnels = USHRT_MAX;
				break;

			case strhash("stun_server"):
				current_settings->stun_server = original_value;
				break;

			case strhash("outbound_bandwidth"):
				current_settings->outbound_bandwidth = bandwidth_from_string(original_value, error_msg);
				break;

			case strhash("inbound_bandwidth"):
				current_settings->inbound_bandwidth = bandwidth_from_string(original_value, error_msg);
				break;
			
			case strhash("log_path"):
				current_settings->log_directory = original_value;
				break;

			case strhash("ipv4_only"):
			{
				bool yes = value == "yes" || value == "true" || value == "1";
				current_settings->ipv4_only = yes;
				break;
			}

			case strhash("blast"):
			{
				bool yes = value == "yes" || value == "true" || value == "1";
				current_settings->ipv4_only = yes;
				break;
			}

			case strhash("[listener]"):
			{
				if (current_user_settings.mode == running_mode::relay)
				{
					if (current_user_settings.ingress == nullptr)
					{
						current_user_settings.ingress = std::make_shared<user_settings>();
						current_user_settings.ingress->mode = running_mode::relay_ingress;
					}
					current_settings = current_user_settings.ingress.get();
				}
				else
				{
					error_msg.emplace_back("invalid section tag: " + arg);
				}
				break;
			}

			case strhash("[forwarder]"):
			{
				if (current_user_settings.mode == running_mode::relay)
				{
					if (current_user_settings.egress == nullptr)
					{
						current_user_settings.egress = std::make_shared<user_settings>();
						current_user_settings.egress->mode = running_mode::relay_egress;
					}
					current_settings = current_user_settings.egress.get();
				}
				else
				{
					error_msg.emplace_back("invalid section tag: " + arg);
				}
				break;
			}

			default:
				error_msg.emplace_back("unknow option: " + arg);
			}
		}
		catch (const std::exception &ex)
		{
			error_msg.emplace_back("invalid input: '" + arg + "'" + ", " + ex.what());
		}
	}

	return error_msg;
}

void check_settings(user_settings &current_user_settings, std::vector<std::string> &error_msg)
{
	if (current_user_settings.mode == running_mode::relay)
	{
		if (current_user_settings.ingress == nullptr && current_user_settings.egress == nullptr)
		{
			error_msg.emplace_back("[listener] and [forwarder] are missing");
		}

		if (current_user_settings.ingress != nullptr || current_user_settings.egress != nullptr)
		{
			if (current_user_settings.ingress == nullptr)
				error_msg.emplace_back("[listener] is missing");

			if (current_user_settings.egress == nullptr)
				error_msg.emplace_back("[forwarder] is missing");
		}

		if (current_user_settings.mux_tunnels > 0)
			error_msg.emplace_back("mux_tunnels should not be set");
	}

	if (current_user_settings.ingress != nullptr)
		copy_settings(*current_user_settings.ingress, current_user_settings);

	if (current_user_settings.egress != nullptr)
		copy_settings(*current_user_settings.egress, current_user_settings);

	verify_kcp_settings(current_user_settings, error_msg);

	if (current_user_settings.encryption != encryption_mode::empty &&
		current_user_settings.encryption != encryption_mode::unknow &&
		current_user_settings.encryption != encryption_mode::none &&
		current_user_settings.encryption_password.empty())
	{
		error_msg.emplace_back("encryption_password is not set");
	}

	if (current_user_settings.mode == running_mode::client)
	{
		if (current_user_settings.listen_port == 0)
			error_msg.emplace_back("listen_port is not set");

		if (current_user_settings.listen_port_start > 0)
			error_msg.emplace_back("listen_port_start should not be set");

		if (current_user_settings.listen_port_end > 0)
			error_msg.emplace_back("listen_port_end should not be set");

		verify_client_destination(current_user_settings, error_msg);
	}

	if (current_user_settings.mode == running_mode::server)
	{
		verify_server_listen_port(current_user_settings, error_msg);

		if (current_user_settings.destination_port == 0)
			error_msg.emplace_back("destination_port is not set");

		if (current_user_settings.destination_port_start > 0)
			error_msg.emplace_back("destination_port_start should not be set");

		if (current_user_settings.destination_port_end > 0)
			error_msg.emplace_back("destination_port_end should not be set");

		if (current_user_settings.destination_address.empty())
			error_msg.emplace_back("invalid destination_address setting");

		if (current_user_settings.mux_tunnels > 0)
			error_msg.emplace_back("mux_tunnels should not be set");
	}

	if (current_user_settings.mode == running_mode::relay_ingress)
	{
		verify_server_listen_port(current_user_settings, error_msg);
	}

	if (current_user_settings.mode == running_mode::relay_egress)
	{
		verify_client_destination(current_user_settings, error_msg);
	}

	if (!current_user_settings.stun_server.empty() && current_user_settings.mode != running_mode::relay)
	{
		if (current_user_settings.listen_port == 0)
			error_msg.emplace_back("do not specify multiple listen ports when STUN Server is set");
	}

	if (error_msg.empty() && current_user_settings.ingress != nullptr)
	{
		check_settings(*current_user_settings.ingress, error_msg);
	}

	if (error_msg.empty() && current_user_settings.egress != nullptr)
	{
		check_settings(*current_user_settings.egress, error_msg);
	}
}

void copy_settings(user_settings &inner, user_settings &outter)
{
	if (outter.kcp_setting != kcp_mode::unknow)
		inner.kcp_setting = outter.kcp_setting;

	if (outter.kcp_rcvwnd > -1)
		inner.kcp_rcvwnd = outter.kcp_rcvwnd;

	if (outter.kcp_sndwnd > -1)
		inner.kcp_sndwnd = outter.kcp_sndwnd;

	if (outter.outbound_bandwidth > 0)
		inner.outbound_bandwidth = outter.outbound_bandwidth;

	if (outter.inbound_bandwidth > 0)
		inner.inbound_bandwidth = outter.inbound_bandwidth;

	if (outter.encryption != encryption_mode::unknow &&
		outter.encryption != encryption_mode::empty &&
		outter.encryption != encryption_mode::none)
		inner.encryption = outter.encryption;

	if (!outter.encryption_password.empty())
		inner.encryption_password = outter.encryption_password;

	if (outter.udp_timeout > 0)
		inner.udp_timeout = outter.udp_timeout;

	if (outter.keep_alive > 0)
		inner.keep_alive = outter.keep_alive;

	if (outter.ipv4_only)
		inner.ipv4_only = outter.ipv4_only;
}

void verify_kcp_settings(user_settings &current_user_settings, std::vector<std::string> &error_msg)
{
	switch (current_user_settings.kcp_setting)
	{
	case kcp_mode::manual:
	{
		if (current_user_settings.kcp_nodelay < 0)
			error_msg.emplace_back("kcp_nodelay not set");

		if (current_user_settings.kcp_interval < 0)
			error_msg.emplace_back("kcp_interval not set");

		if (current_user_settings.kcp_resend < 0)
			error_msg.emplace_back("kcp_resend not set");

		if (current_user_settings.kcp_nc < 0)
			error_msg.emplace_back("kcp_nc not set");

		break;
	}
	default:
		break;
	}
}

void verify_server_listen_port(user_settings &current_user_settings, std::vector<std::string> &error_msg)
{
	bool use_dynamic_ports = current_user_settings.listen_port_start || current_user_settings.listen_port_end;
	if (use_dynamic_ports)
	{
		if (current_user_settings.listen_port_start == 0)
			error_msg.emplace_back("listen_port_start is missing");

		if (current_user_settings.listen_port_end == 0)
			error_msg.emplace_back("listen_port_end is missing");

		if (current_user_settings.listen_port_start > 0 && current_user_settings.listen_port_end > 0)
		{
			if (current_user_settings.listen_port_end == current_user_settings.listen_port_start)
				error_msg.emplace_back("listen_port_start is equal to listen_port_end");

			if (current_user_settings.listen_port_end < current_user_settings.listen_port_start)
				error_msg.emplace_back("listen_port_end is less than listen_port_start");
		}
	}
	else
	{
		if (current_user_settings.listen_port == 0)
			error_msg.emplace_back("listen_port is not set");
	}
}

void verify_client_destination(user_settings &current_user_settings, std::vector<std::string>& error_msg)
{
	if (current_user_settings.destination_port == 0)
	{
		if (current_user_settings.destination_port_start == 0 ||
			current_user_settings.destination_port_end == 0)
		{
			error_msg.emplace_back("destination port setting incorrect");
		}

		if (current_user_settings.destination_port_start > current_user_settings.destination_port_end)
		{
			error_msg.emplace_back("destination end port must larger than start port");
		}
	}

	if (current_user_settings.destination_address.empty())
		error_msg.emplace_back("invalid destination_address setting");
}

uint64_t bandwidth_from_string(const std::string &bandwidth, std::vector<std::string> &error_msg)
{
	if (bandwidth.empty())
		return 0;

	constexpr uint64_t kilo = 1000;
	constexpr uint64_t kibi = 1024;
	uint64_t full_bandwidth = 0;
	uint64_t bandwidth_expand = 1;
	std::string bandwidth_number = bandwidth;
	char unit = bandwidth.back();
	switch (unit)
	{
	case 'K':
		bandwidth_expand = kibi;
		break;
	case 'k':
		bandwidth_expand = kilo;
		break;
	case 'M':
		bandwidth_expand = kibi * kibi;
		break;
	case 'm':
		bandwidth_expand = kilo * kilo;
		break;
	case 'G':
		bandwidth_expand = kibi * kibi * kibi;
		break;
	case 'g':
		bandwidth_expand = kilo * kilo * kilo;
		break;
	case '0':
		break;
	case '1':
		break;
	case '2':
		break;
	case '3':
		break;
	case '4':
		break;
	case '5':
		break;
	case '6':
		break;
	case '7':
		break;
	case '8':
		break;
	case '9':
		break;
	default:
		error_msg.emplace_back("Unknow bandwidth unit");
		break;
	}

	if (bandwidth_expand > 0)
		bandwidth_number.pop_back();

	if (bandwidth_number.empty())
		return 0;

	try
	{
		full_bandwidth = std::stoi(bandwidth_number) * bandwidth_expand / 8;
	}
	catch (...)
	{
		error_msg.emplace_back("bandwidth convertion failed");
		return 0;
	}

	return full_bandwidth;
}
