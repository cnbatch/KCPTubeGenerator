#pragma once

#ifndef __CONFIGURATIONS_HPP_
#define __CONFIGURATIONS_HPP_

#include <memory>
#include <map>
#include <string>
#include <vector>
#include <wx/string.h>

enum class running_mode { unknow, server, client, relay, relay_ingress, relay_egress };
enum class kcp_mode { unknow, regular1, regular2, regular3, regular4, regular5, fast1, fast2, fast3, fast4, fast5, fast6, manual };
enum class encryption_mode { unknow, empty, none, aes_gcm, aes_ocb, chacha20, xchacha20 };

struct user_settings
{
	using user_input_address_mapping = std::map<std::pair<std::string, uint16_t>, std::pair<std::string, uint16_t>>;
	uint16_t listen_port = 0;
	uint16_t listen_port_start = 0;
	uint16_t listen_port_end = 0;
	uint16_t destination_port = 0;
	uint16_t destination_port_start = 0;
	uint16_t destination_port_end = 0;
	int16_t dynamic_port_refresh = -1;	// seconds
	uint16_t udp_timeout = 0;	 // seconds
	uint16_t keep_alive = 0;	// seconds
	uint16_t mux_tunnels = 0;	// client only
	uint8_t fec_data = 0;
	uint8_t fec_redundant = 0;
	encryption_mode encryption = encryption_mode::empty;
	running_mode mode = running_mode::unknow;
	kcp_mode kcp_setting = kcp_mode::unknow;
	int mtu = -1;
	int kcp_mtu = -1;
	int kcp_sndwnd = -1;
	int kcp_rcvwnd = -1;
	int kcp_nodelay = -1;
	int kcp_interval = -1;
	int kcp_resend = -1;
	int kcp_nc = -1;
	uint64_t outbound_bandwidth = 0;
	uint64_t inbound_bandwidth = 0;
	bool ipv4_only = false;
	bool blast = false;
	bool ignore_listen_address = false;
	bool ignore_listen_port = false;
	bool ignore_destination_address = false;
	bool ignore_destination_port = false;
	wxString listen_on;
	wxString destination_address;
	wxString encryption_password;
	wxString stun_server;
	wxString log_directory;
	wxString log_ip_address;
	wxString log_messages;
	std::shared_ptr<user_settings> ingress;
	std::shared_ptr<user_settings> egress;
	std::shared_ptr<user_input_address_mapping> user_input_mappings;
	std::shared_ptr<user_input_address_mapping> user_input_mappings_tcp;
	std::shared_ptr<user_input_address_mapping> user_input_mappings_udp;
};

bool is_valid_domain(const std::string &input_string);
bool is_valid_ip(const std::string &input_string);
std::string bandwidth_seletion_to_string(int input_bandwidth, int selected_value);
std::string encryption_selection_to_string(int selected_value);
std::string steps_kcp_profile_to_string(int selected_value);
std::string full_kcp_profile_to_string(int selected_value);
user_settings userinput_kcp_profile_get_settings(int selected_value);

template<typename T>
std::map<T, wxString> all_std_string_to_wxstring(const std::map<T, std::string> &input)
{
	std::map<T, wxString> output_strings;

	for (auto &[key, value] : input)
	{
		output_strings[key] = wxString::FromUTF8(value);
	}

	return output_strings;
}

void parse_from_args(const std::vector<std::string> &args, std::vector<std::string> &error_msg);
std::vector<std::string> parse_running_mode(const std::vector<std::string> &args, user_settings &current_user_settings);
std::vector<std::string> parse_the_rest(const std::vector<std::string> &args, user_settings &current_user_settings);
void parse_custom_input_ip(const std::string &line, user_settings::user_input_address_mapping *mappings_ptr, std::vector<std::string> &error_msg);
std::pair<std::string, std::string> split_address(const std::string &input_address, std::vector<std::string> &error_msg);
void check_settings(user_settings &current_user_settings, std::vector<std::string> &error_msg);
void copy_settings(user_settings &inner, user_settings &outter);
void verify_kcp_settings(user_settings &current_user_settings, std::vector<std::string> &error_msg);
void verify_server_listen_port(user_settings &current_user_settings, std::vector<std::string> &error_msg);
void verify_client_destination(user_settings &current_user_settings, std::vector<std::string> &error_msg);
uint64_t bandwidth_from_string(const std::string &bandwidth, std::vector<std::string> &error_msg);


#endif