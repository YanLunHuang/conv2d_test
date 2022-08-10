// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->
    namespace nnet
    {
        template< typename T ,unsigned int N > struct array;
        template<> struct array<ap_fixed<16, 14, 5, 3, 0>, 8> {
            ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> data[8];
           } ;

          };



// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "input_1_V_data_0_V"
#define AUTOTB_TVIN_input_1_V_data_0_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_0_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V  "../tv/stream_size/stream_size_in_input_1_V_data_0_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_0_V.dat"
// wrapc file define: "input_1_V_data_1_V"
#define AUTOTB_TVIN_input_1_V_data_1_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_1_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_1_V  "../tv/stream_size/stream_size_in_input_1_V_data_1_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_1_V.dat"
// wrapc file define: "input_1_V_data_2_V"
#define AUTOTB_TVIN_input_1_V_data_2_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_2_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_2_V  "../tv/stream_size/stream_size_in_input_1_V_data_2_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_2_V.dat"
// wrapc file define: "input_1_V_data_3_V"
#define AUTOTB_TVIN_input_1_V_data_3_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_3_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_3_V  "../tv/stream_size/stream_size_in_input_1_V_data_3_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_3_V.dat"
// wrapc file define: "input_1_V_data_4_V"
#define AUTOTB_TVIN_input_1_V_data_4_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_4_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_4_V  "../tv/stream_size/stream_size_in_input_1_V_data_4_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_4_V.dat"
// wrapc file define: "input_1_V_data_5_V"
#define AUTOTB_TVIN_input_1_V_data_5_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_5_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_5_V  "../tv/stream_size/stream_size_in_input_1_V_data_5_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_5_V.dat"
// wrapc file define: "input_1_V_data_6_V"
#define AUTOTB_TVIN_input_1_V_data_6_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_6_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_6_V  "../tv/stream_size/stream_size_in_input_1_V_data_6_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_6_V.dat"
// wrapc file define: "input_1_V_data_7_V"
#define AUTOTB_TVIN_input_1_V_data_7_V  "../tv/cdatafile/c.myproject.autotvin_input_1_V_data_7_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_V_data_7_V  "../tv/stream_size/stream_size_in_input_1_V_data_7_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V  "../tv/stream_size/stream_ingress_status_input_1_V_data_7_V.dat"
// wrapc file define: "layer2_out_V_data_0_V"
#define AUTOTB_TVOUT_layer2_out_V_data_0_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_0_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_0_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_0_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_0_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_0_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_0_V.dat"
// wrapc file define: "layer2_out_V_data_1_V"
#define AUTOTB_TVOUT_layer2_out_V_data_1_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_1_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_1_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_1_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_1_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_1_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_1_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_1_V.dat"
// wrapc file define: "layer2_out_V_data_2_V"
#define AUTOTB_TVOUT_layer2_out_V_data_2_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_2_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_2_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_2_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_2_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_2_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_2_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_2_V.dat"
// wrapc file define: "layer2_out_V_data_3_V"
#define AUTOTB_TVOUT_layer2_out_V_data_3_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_3_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_3_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_3_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_3_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_3_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_3_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_3_V.dat"
// wrapc file define: "layer2_out_V_data_4_V"
#define AUTOTB_TVOUT_layer2_out_V_data_4_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_4_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_4_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_4_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_4_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_4_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_4_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_4_V.dat"
// wrapc file define: "layer2_out_V_data_5_V"
#define AUTOTB_TVOUT_layer2_out_V_data_5_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_5_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_5_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_5_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_5_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_5_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_5_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_5_V.dat"
// wrapc file define: "layer2_out_V_data_6_V"
#define AUTOTB_TVOUT_layer2_out_V_data_6_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_6_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_6_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_6_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_6_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_6_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_6_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_6_V.dat"
// wrapc file define: "layer2_out_V_data_7_V"
#define AUTOTB_TVOUT_layer2_out_V_data_7_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_V_data_7_V.dat"
#define AUTOTB_TVIN_layer2_out_V_data_7_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_V_data_7_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_7_V  "../tv/stream_size/stream_size_out_layer2_out_V_data_7_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_7_V  "../tv/stream_size/stream_egress_status_layer2_out_V_data_7_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer2_out_V_data_0_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_0_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_0_V.dat"
// tvout file define: "layer2_out_V_data_1_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_1_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_1_V.dat"
// tvout file define: "layer2_out_V_data_2_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_2_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_2_V.dat"
// tvout file define: "layer2_out_V_data_3_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_3_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_3_V.dat"
// tvout file define: "layer2_out_V_data_4_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_4_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_4_V.dat"
// tvout file define: "layer2_out_V_data_5_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_5_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_5_V.dat"
// tvout file define: "layer2_out_V_data_6_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_6_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_6_V.dat"
// tvout file define: "layer2_out_V_data_7_V"
#define AUTOTB_TVOUT_PC_layer2_out_V_data_7_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_V_data_7_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			input_1_V_data_0_V_depth = 0;
			input_1_V_data_1_V_depth = 0;
			input_1_V_data_2_V_depth = 0;
			input_1_V_data_3_V_depth = 0;
			input_1_V_data_4_V_depth = 0;
			input_1_V_data_5_V_depth = 0;
			input_1_V_data_6_V_depth = 0;
			input_1_V_data_7_V_depth = 0;
			layer2_out_V_data_0_V_depth = 0;
			layer2_out_V_data_1_V_depth = 0;
			layer2_out_V_data_2_V_depth = 0;
			layer2_out_V_data_3_V_depth = 0;
			layer2_out_V_data_4_V_depth = 0;
			layer2_out_V_data_5_V_depth = 0;
			layer2_out_V_data_6_V_depth = 0;
			layer2_out_V_data_7_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{input_1_V_data_0_V " << input_1_V_data_0_V_depth << "}\n";
			total_list << "{input_1_V_data_1_V " << input_1_V_data_1_V_depth << "}\n";
			total_list << "{input_1_V_data_2_V " << input_1_V_data_2_V_depth << "}\n";
			total_list << "{input_1_V_data_3_V " << input_1_V_data_3_V_depth << "}\n";
			total_list << "{input_1_V_data_4_V " << input_1_V_data_4_V_depth << "}\n";
			total_list << "{input_1_V_data_5_V " << input_1_V_data_5_V_depth << "}\n";
			total_list << "{input_1_V_data_6_V " << input_1_V_data_6_V_depth << "}\n";
			total_list << "{input_1_V_data_7_V " << input_1_V_data_7_V_depth << "}\n";
			total_list << "{layer2_out_V_data_0_V " << layer2_out_V_data_0_V_depth << "}\n";
			total_list << "{layer2_out_V_data_1_V " << layer2_out_V_data_1_V_depth << "}\n";
			total_list << "{layer2_out_V_data_2_V " << layer2_out_V_data_2_V_depth << "}\n";
			total_list << "{layer2_out_V_data_3_V " << layer2_out_V_data_3_V_depth << "}\n";
			total_list << "{layer2_out_V_data_4_V " << layer2_out_V_data_4_V_depth << "}\n";
			total_list << "{layer2_out_V_data_5_V " << layer2_out_V_data_5_V_depth << "}\n";
			total_list << "{layer2_out_V_data_6_V " << layer2_out_V_data_6_V_depth << "}\n";
			total_list << "{layer2_out_V_data_7_V " << layer2_out_V_data_7_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int input_1_V_data_0_V_depth;
		int input_1_V_data_1_V_depth;
		int input_1_V_data_2_V_depth;
		int input_1_V_data_3_V_depth;
		int input_1_V_data_4_V_depth;
		int input_1_V_data_5_V_depth;
		int input_1_V_data_6_V_depth;
		int input_1_V_data_7_V_depth;
		int layer2_out_V_data_0_V_depth;
		int layer2_out_V_data_1_V_depth;
		int layer2_out_V_data_2_V_depth;
		int layer2_out_V_data_3_V_depth;
		int layer2_out_V_data_4_V_depth;
		int layer2_out_V_data_5_V_depth;
		int layer2_out_V_data_6_V_depth;
		int layer2_out_V_data_7_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void myproject (
hls::stream<nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > > (&input_1),
hls::stream<nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > > (&layer2_out));

void AESL_WRAP_myproject (
hls::stream<nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > > (&input_1),
hls::stream<nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > > (&layer2_out))
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		// pop stream input: "input_1"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V, AESL_token); // pop_size
			int aesl_tmp_7 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_7; i++)
			{
				input_1.read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out"
		std::vector<nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > > aesl_tmp_9;
		int aesl_tmp_10;
		int aesl_tmp_11 = 0;

		// read output stream size: "layer2_out"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V, AESL_token); // pop_size
			aesl_tmp_10 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "layer2_out_V_data_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_0_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_0_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_0_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_0_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_0_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_0_0_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_0_0_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_0_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (0) => (0) @ (2)
								for (int i_1 = 0; i_1 <= 0; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_V_data_1_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_1_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_1_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_1_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_1_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_1_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_1_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_1_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_1_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_1_1_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_1_1_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_1_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (1) => (1) @ (2)
								for (int i_1 = 1; i_1 <= 1; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_1_1_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_1_1_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_V_data_2_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_2_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_2_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_2_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_2_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_2_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_2_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_2_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_2_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_2_2_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_2_2_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_2_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (2) => (2) @ (2)
								for (int i_1 = 2; i_1 <= 2; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_2_2_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_2_2_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_V_data_3_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_3_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_3_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_3_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_3_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_3_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_3_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_3_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_3_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_3_3_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_3_3_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_3_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (3) => (3) @ (2)
								for (int i_1 = 3; i_1 <= 3; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_3_3_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_3_3_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_V_data_4_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_4_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_4_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_4_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_4_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_4_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_4_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_4_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_4_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_4_4_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (4) => (4) @ (2)
								for (int i_1 = 4; i_1 <= 4; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_4_4_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_4_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (4) => (4) @ (2)
								for (int i_1 = 4; i_1 <= 4; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_4_4_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_4_4_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_V_data_5_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_5_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_5_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_5_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_5_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_5_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_5_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_5_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_5_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_5_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_5_5_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (5) => (5) @ (2)
								for (int i_1 = 5; i_1 <= 5; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_5_5_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_5_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (5) => (5) @ (2)
								for (int i_1 = 5; i_1 <= 5; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_5_5_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_5_5_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_V_data_6_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_6_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_6_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_6_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_6_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_6_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_6_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_6_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_6_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_6_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_6_6_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (6) => (6) @ (2)
								for (int i_1 = 6; i_1 <= 6; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_6_6_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_6_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (6) => (6) @ (2)
								for (int i_1 = 6; i_1 <= 6; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_6_6_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_6_6_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_V_data_7_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_7_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_7_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_7_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_V_data_7_V_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_V_data_7_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer2_out_V_data_7_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_V_data_7_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_V_data_7_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_10)
			{
				aesl_tmp_10 = i;
			}

			if (aesl_tmp_10 > 0 && aesl_tmp_9.size() < aesl_tmp_10)
			{
				int aesl_tmp_9_size = aesl_tmp_9.size();

				for (int tmp_aesl_tmp_9 = 0; tmp_aesl_tmp_9 < aesl_tmp_10 - aesl_tmp_9_size; tmp_aesl_tmp_9++)
				{
					nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > tmp;
					aesl_tmp_9.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_V_data_7_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.data.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_data_V_lv0_0_0_1_lv1_7_7_2 = new sc_lv<16>[aesl_tmp_10 - aesl_tmp_11];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (7) => (7) @ (2)
								for (int i_1 = 7; i_1 <= 7; i_1 += 2)
								{
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										layer2_out_V_data_V_lv0_0_0_1_lv1_7_7_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_V_data_7_V_pc_buffer[hls_map_index].range(15, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.data.V(15, 0)
						{
							// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
							for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
							{
								// carray: (7) => (7) @ (2)
								for (int i_1 = 7; i_1 <= 7; i_1 += 2)
								{
									// sub                    : i_0 i_1
									// ori_name               : aesl_tmp_9[i_0].data[i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : aesl_tmp_9[0].data[0]
									// output_left_conversion : (aesl_tmp_9[i_0].data[i_1]).range()
									// output_type_conversion : (layer2_out_V_data_V_lv0_0_0_1_lv1_7_7_2[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
									{
										(aesl_tmp_9[i_0].data[i_1]).range() = (layer2_out_V_data_V_lv0_0_0_1_lv1_7_7_2[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}
		}

		// push back output stream: "layer2_out"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			layer2_out.write(aesl_tmp_9[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "input_1_V_data_0_V"
		char* tvin_input_1_V_data_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_0_V);
		char* wrapc_stream_size_in_input_1_V_data_0_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V);
		char* wrapc_stream_ingress_status_input_1_V_data_0_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V);

		// "input_1_V_data_1_V"
		char* tvin_input_1_V_data_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_1_V);
		char* wrapc_stream_size_in_input_1_V_data_1_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_1_V);
		char* wrapc_stream_ingress_status_input_1_V_data_1_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V);

		// "input_1_V_data_2_V"
		char* tvin_input_1_V_data_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_2_V);
		char* wrapc_stream_size_in_input_1_V_data_2_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_2_V);
		char* wrapc_stream_ingress_status_input_1_V_data_2_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V);

		// "input_1_V_data_3_V"
		char* tvin_input_1_V_data_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_3_V);
		char* wrapc_stream_size_in_input_1_V_data_3_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_3_V);
		char* wrapc_stream_ingress_status_input_1_V_data_3_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V);

		// "input_1_V_data_4_V"
		char* tvin_input_1_V_data_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_4_V);
		char* wrapc_stream_size_in_input_1_V_data_4_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_4_V);
		char* wrapc_stream_ingress_status_input_1_V_data_4_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V);

		// "input_1_V_data_5_V"
		char* tvin_input_1_V_data_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_5_V);
		char* wrapc_stream_size_in_input_1_V_data_5_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_5_V);
		char* wrapc_stream_ingress_status_input_1_V_data_5_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V);

		// "input_1_V_data_6_V"
		char* tvin_input_1_V_data_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_6_V);
		char* wrapc_stream_size_in_input_1_V_data_6_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_6_V);
		char* wrapc_stream_ingress_status_input_1_V_data_6_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V);

		// "input_1_V_data_7_V"
		char* tvin_input_1_V_data_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_V_data_7_V);
		char* wrapc_stream_size_in_input_1_V_data_7_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_V_data_7_V);
		char* wrapc_stream_ingress_status_input_1_V_data_7_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V);

		// "layer2_out_V_data_0_V"
		char* tvin_layer2_out_V_data_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_0_V);
		char* tvout_layer2_out_V_data_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_0_V);
		char* wrapc_stream_size_out_layer2_out_V_data_0_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_0_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_0_V);

		// "layer2_out_V_data_1_V"
		char* tvin_layer2_out_V_data_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_1_V);
		char* tvout_layer2_out_V_data_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_1_V);
		char* wrapc_stream_size_out_layer2_out_V_data_1_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_1_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_1_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_1_V);

		// "layer2_out_V_data_2_V"
		char* tvin_layer2_out_V_data_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_2_V);
		char* tvout_layer2_out_V_data_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_2_V);
		char* wrapc_stream_size_out_layer2_out_V_data_2_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_2_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_2_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_2_V);

		// "layer2_out_V_data_3_V"
		char* tvin_layer2_out_V_data_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_3_V);
		char* tvout_layer2_out_V_data_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_3_V);
		char* wrapc_stream_size_out_layer2_out_V_data_3_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_3_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_3_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_3_V);

		// "layer2_out_V_data_4_V"
		char* tvin_layer2_out_V_data_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_4_V);
		char* tvout_layer2_out_V_data_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_4_V);
		char* wrapc_stream_size_out_layer2_out_V_data_4_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_4_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_4_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_4_V);

		// "layer2_out_V_data_5_V"
		char* tvin_layer2_out_V_data_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_5_V);
		char* tvout_layer2_out_V_data_5_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_5_V);
		char* wrapc_stream_size_out_layer2_out_V_data_5_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_5_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_5_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_5_V);

		// "layer2_out_V_data_6_V"
		char* tvin_layer2_out_V_data_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_6_V);
		char* tvout_layer2_out_V_data_6_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_6_V);
		char* wrapc_stream_size_out_layer2_out_V_data_6_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_6_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_6_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_6_V);

		// "layer2_out_V_data_7_V"
		char* tvin_layer2_out_V_data_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_V_data_7_V);
		char* tvout_layer2_out_V_data_7_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_V_data_7_V);
		char* wrapc_stream_size_out_layer2_out_V_data_7_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_7_V);
		char* wrapc_stream_egress_status_layer2_out_V_data_7_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_V_data_7_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "input_1"
		std::vector<nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > > aesl_tmp_6;
		int aesl_tmp_7 = 0;
		while (!input_1.empty())
		{
			aesl_tmp_6.push_back(input_1.read());
			aesl_tmp_7++;
		}

		// dump stream tvin: "layer2_out"
		std::vector<nnet::array<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0>, 8 > > aesl_tmp_9;
		int aesl_tmp_10 = 0;
		while (!layer2_out.empty())
		{
			aesl_tmp_9.push_back(layer2_out.read());
			aesl_tmp_10++;
		}

		// push back input stream: "input_1"
		for (int i = 0; i < aesl_tmp_7; i++)
		{
			input_1.write(aesl_tmp_6[i]);
		}

		// push back input stream: "layer2_out"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			layer2_out.write(aesl_tmp_9[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		myproject(input_1, layer2_out);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "input_1"
		int aesl_tmp_8 = input_1.size();

		// pop output stream: "layer2_out"
		int aesl_tmp_11 = aesl_tmp_10;
		aesl_tmp_10 = 0;
     aesl_tmp_9.clear();
		while (!layer2_out.empty())
		{
			aesl_tmp_9.push_back(layer2_out.read());
			aesl_tmp_10++;
		}

		// [[transaction]]
		sprintf(tvin_input_1_V_data_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_0_V, tvin_input_1_V_data_0_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, tvin_input_1_V_data_0_V);

		sc_bv<16>* input_1_V_data_0_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_0_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_0_V, "%s\n", (input_1_V_data_0_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_0_V, tvin_input_1_V_data_0_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_0_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, stream_ingress_size_input_1_V_data_0_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_0_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, stream_ingress_size_input_1_V_data_0_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_0_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, stream_ingress_size_input_1_V_data_0_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_0_V_depth);
		sprintf(tvin_input_1_V_data_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_0_V, tvin_input_1_V_data_0_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_0_V, tvin_input_1_V_data_0_V);

		// release memory allocation
		delete [] input_1_V_data_0_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V, wrapc_stream_size_in_input_1_V_data_0_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_0_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V, wrapc_stream_size_in_input_1_V_data_0_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_0_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_0_V, wrapc_stream_size_in_input_1_V_data_0_V);

		// [[transaction]]
		sprintf(tvin_input_1_V_data_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_1_V, tvin_input_1_V_data_1_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, tvin_input_1_V_data_1_V);

		sc_bv<16>* input_1_V_data_1_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_1_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_1_V, "%s\n", (input_1_V_data_1_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_1_V, tvin_input_1_V_data_1_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_1_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, stream_ingress_size_input_1_V_data_1_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_1_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, stream_ingress_size_input_1_V_data_1_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_1_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, stream_ingress_size_input_1_V_data_1_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_1_V_depth);
		sprintf(tvin_input_1_V_data_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_1_V, tvin_input_1_V_data_1_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_1_V, tvin_input_1_V_data_1_V);

		// release memory allocation
		delete [] input_1_V_data_1_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_1_V, wrapc_stream_size_in_input_1_V_data_1_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_1_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_1_V, wrapc_stream_size_in_input_1_V_data_1_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_1_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_1_V, wrapc_stream_size_in_input_1_V_data_1_V);

		// [[transaction]]
		sprintf(tvin_input_1_V_data_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_2_V, tvin_input_1_V_data_2_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, tvin_input_1_V_data_2_V);

		sc_bv<16>* input_1_V_data_2_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_2_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_2_V, "%s\n", (input_1_V_data_2_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_2_V, tvin_input_1_V_data_2_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_2_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, stream_ingress_size_input_1_V_data_2_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_2_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, stream_ingress_size_input_1_V_data_2_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_2_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, stream_ingress_size_input_1_V_data_2_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_2_V_depth);
		sprintf(tvin_input_1_V_data_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_2_V, tvin_input_1_V_data_2_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_2_V, tvin_input_1_V_data_2_V);

		// release memory allocation
		delete [] input_1_V_data_2_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_2_V, wrapc_stream_size_in_input_1_V_data_2_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_2_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_2_V, wrapc_stream_size_in_input_1_V_data_2_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_2_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_2_V, wrapc_stream_size_in_input_1_V_data_2_V);

		// [[transaction]]
		sprintf(tvin_input_1_V_data_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_3_V, tvin_input_1_V_data_3_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, tvin_input_1_V_data_3_V);

		sc_bv<16>* input_1_V_data_3_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_3_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_3_V, "%s\n", (input_1_V_data_3_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_3_V, tvin_input_1_V_data_3_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_3_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, stream_ingress_size_input_1_V_data_3_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_3_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, stream_ingress_size_input_1_V_data_3_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_3_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, stream_ingress_size_input_1_V_data_3_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_3_V_depth);
		sprintf(tvin_input_1_V_data_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_3_V, tvin_input_1_V_data_3_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_3_V, tvin_input_1_V_data_3_V);

		// release memory allocation
		delete [] input_1_V_data_3_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_3_V, wrapc_stream_size_in_input_1_V_data_3_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_3_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_3_V, wrapc_stream_size_in_input_1_V_data_3_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_3_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_3_V, wrapc_stream_size_in_input_1_V_data_3_V);

		// [[transaction]]
		sprintf(tvin_input_1_V_data_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_4_V, tvin_input_1_V_data_4_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, tvin_input_1_V_data_4_V);

		sc_bv<16>* input_1_V_data_4_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (4) => (4) @ (2)
						for (int i_1 = 4; i_1 <= 4; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_4_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_4_V, "%s\n", (input_1_V_data_4_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_4_V, tvin_input_1_V_data_4_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_4_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, stream_ingress_size_input_1_V_data_4_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_4_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, stream_ingress_size_input_1_V_data_4_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_4_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, stream_ingress_size_input_1_V_data_4_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_4_V_depth);
		sprintf(tvin_input_1_V_data_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_4_V, tvin_input_1_V_data_4_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_4_V, tvin_input_1_V_data_4_V);

		// release memory allocation
		delete [] input_1_V_data_4_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_4_V, wrapc_stream_size_in_input_1_V_data_4_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_4_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_4_V, wrapc_stream_size_in_input_1_V_data_4_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_4_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_4_V, wrapc_stream_size_in_input_1_V_data_4_V);

		// [[transaction]]
		sprintf(tvin_input_1_V_data_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_5_V, tvin_input_1_V_data_5_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, tvin_input_1_V_data_5_V);

		sc_bv<16>* input_1_V_data_5_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (5) => (5) @ (2)
						for (int i_1 = 5; i_1 <= 5; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_5_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_5_V, "%s\n", (input_1_V_data_5_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_5_V, tvin_input_1_V_data_5_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_5_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, stream_ingress_size_input_1_V_data_5_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_5_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, stream_ingress_size_input_1_V_data_5_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_5_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, stream_ingress_size_input_1_V_data_5_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_5_V_depth);
		sprintf(tvin_input_1_V_data_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_5_V, tvin_input_1_V_data_5_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_5_V, tvin_input_1_V_data_5_V);

		// release memory allocation
		delete [] input_1_V_data_5_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_5_V, wrapc_stream_size_in_input_1_V_data_5_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_5_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_5_V, wrapc_stream_size_in_input_1_V_data_5_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_5_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_5_V, wrapc_stream_size_in_input_1_V_data_5_V);

		// [[transaction]]
		sprintf(tvin_input_1_V_data_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_6_V, tvin_input_1_V_data_6_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, tvin_input_1_V_data_6_V);

		sc_bv<16>* input_1_V_data_6_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (6) => (6) @ (2)
						for (int i_1 = 6; i_1 <= 6; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_6_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_6_V, "%s\n", (input_1_V_data_6_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_6_V, tvin_input_1_V_data_6_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_6_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, stream_ingress_size_input_1_V_data_6_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_6_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, stream_ingress_size_input_1_V_data_6_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_6_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, stream_ingress_size_input_1_V_data_6_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_6_V_depth);
		sprintf(tvin_input_1_V_data_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_6_V, tvin_input_1_V_data_6_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_6_V, tvin_input_1_V_data_6_V);

		// release memory allocation
		delete [] input_1_V_data_6_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_6_V, wrapc_stream_size_in_input_1_V_data_6_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_6_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_6_V, wrapc_stream_size_in_input_1_V_data_6_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_6_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_6_V, wrapc_stream_size_in_input_1_V_data_6_V);

		// [[transaction]]
		sprintf(tvin_input_1_V_data_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_7_V, tvin_input_1_V_data_7_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, tvin_input_1_V_data_7_V);

		sc_bv<16>* input_1_V_data_7_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_7 - aesl_tmp_8];

		// RTL Name: input_1_V_data_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.data.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_7 - aesl_tmp_8 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_7 - aesl_tmp_8 - 1; i_0 += 1)
					{
						// carray: (7) => (7) @ (2)
						for (int i_1 = 7; i_1 <= 7; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_6[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_6[0].data[0]
							// regulate_c_name       : input_1_V_data_V
							// input_type_conversion : (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_6[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> input_1_V_data_V_tmp_mem;
								input_1_V_data_V_tmp_mem = (aesl_tmp_6[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								input_1_V_data_7_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			sprintf(tvin_input_1_V_data_7_V, "%s\n", (input_1_V_data_7_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_V_data_7_V, tvin_input_1_V_data_7_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_7 > aesl_tmp_8)
     {
		sc_int<32> stream_ingress_size_input_1_V_data_7_V = aesl_tmp_7;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, stream_ingress_size_input_1_V_data_7_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, "\n");

		for (int i = 0; i < aesl_tmp_7 - aesl_tmp_8; i++)
		{
			stream_ingress_size_input_1_V_data_7_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, stream_ingress_size_input_1_V_data_7_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_V_data_7_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, stream_ingress_size_input_1_V_data_7_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_7 - aesl_tmp_8, &tcl_file.input_1_V_data_7_V_depth);
		sprintf(tvin_input_1_V_data_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_V_data_7_V, tvin_input_1_V_data_7_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_V_data_7_V, tvin_input_1_V_data_7_V);

		// release memory allocation
		delete [] input_1_V_data_7_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_V_data_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_7_V, wrapc_stream_size_in_input_1_V_data_7_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_7_V, "%d\n", aesl_tmp_7 - aesl_tmp_8);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_7_V, wrapc_stream_size_in_input_1_V_data_7_V);
		sprintf(wrapc_stream_size_in_input_1_V_data_7_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_V_data_7_V, wrapc_stream_size_in_input_1_V_data_7_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_0_V, tvout_layer2_out_V_data_0_V);

		sc_bv<16>* layer2_out_V_data_0_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (0) => (0) @ (2)
						for (int i_1 = 0; i_1 <= 0; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_0_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_0_V, "%s\n", (layer2_out_V_data_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_0_V, tvout_layer2_out_V_data_0_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_0_V_depth);
		sprintf(tvout_layer2_out_V_data_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_0_V, tvout_layer2_out_V_data_0_V);

		// release memory allocation
		delete [] layer2_out_V_data_0_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V, wrapc_stream_size_out_layer2_out_V_data_0_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_0_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V, wrapc_stream_size_out_layer2_out_V_data_0_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_0_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_0_V, wrapc_stream_size_out_layer2_out_V_data_0_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_1_V, tvout_layer2_out_V_data_1_V);

		sc_bv<16>* layer2_out_V_data_1_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (1) => (1) @ (2)
						for (int i_1 = 1; i_1 <= 1; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_1_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_1_V, "%s\n", (layer2_out_V_data_1_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_1_V, tvout_layer2_out_V_data_1_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_1_V_depth);
		sprintf(tvout_layer2_out_V_data_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_1_V, tvout_layer2_out_V_data_1_V);

		// release memory allocation
		delete [] layer2_out_V_data_1_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_1_V, wrapc_stream_size_out_layer2_out_V_data_1_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_1_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_1_V, wrapc_stream_size_out_layer2_out_V_data_1_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_1_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_1_V, wrapc_stream_size_out_layer2_out_V_data_1_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_2_V, tvout_layer2_out_V_data_2_V);

		sc_bv<16>* layer2_out_V_data_2_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (2) => (2) @ (2)
						for (int i_1 = 2; i_1 <= 2; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_2_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_2_V, "%s\n", (layer2_out_V_data_2_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_2_V, tvout_layer2_out_V_data_2_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_2_V_depth);
		sprintf(tvout_layer2_out_V_data_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_2_V, tvout_layer2_out_V_data_2_V);

		// release memory allocation
		delete [] layer2_out_V_data_2_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_2_V, wrapc_stream_size_out_layer2_out_V_data_2_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_2_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_2_V, wrapc_stream_size_out_layer2_out_V_data_2_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_2_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_2_V, wrapc_stream_size_out_layer2_out_V_data_2_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_3_V, tvout_layer2_out_V_data_3_V);

		sc_bv<16>* layer2_out_V_data_3_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (3) => (3) @ (2)
						for (int i_1 = 3; i_1 <= 3; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_3_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_3_V, "%s\n", (layer2_out_V_data_3_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_3_V, tvout_layer2_out_V_data_3_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_3_V_depth);
		sprintf(tvout_layer2_out_V_data_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_3_V, tvout_layer2_out_V_data_3_V);

		// release memory allocation
		delete [] layer2_out_V_data_3_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_3_V, wrapc_stream_size_out_layer2_out_V_data_3_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_3_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_3_V, wrapc_stream_size_out_layer2_out_V_data_3_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_3_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_3_V, wrapc_stream_size_out_layer2_out_V_data_3_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_4_V, tvout_layer2_out_V_data_4_V);

		sc_bv<16>* layer2_out_V_data_4_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (4) => (4) @ (2)
						for (int i_1 = 4; i_1 <= 4; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_4_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_4_V, "%s\n", (layer2_out_V_data_4_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_4_V, tvout_layer2_out_V_data_4_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_4_V_depth);
		sprintf(tvout_layer2_out_V_data_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_4_V, tvout_layer2_out_V_data_4_V);

		// release memory allocation
		delete [] layer2_out_V_data_4_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_4_V, wrapc_stream_size_out_layer2_out_V_data_4_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_4_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_4_V, wrapc_stream_size_out_layer2_out_V_data_4_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_4_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_4_V, wrapc_stream_size_out_layer2_out_V_data_4_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_5_V, tvout_layer2_out_V_data_5_V);

		sc_bv<16>* layer2_out_V_data_5_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_5_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (5) => (5) @ (2)
						for (int i_1 = 5; i_1 <= 5; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_5_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_5_V, "%s\n", (layer2_out_V_data_5_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_5_V, tvout_layer2_out_V_data_5_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_5_V_depth);
		sprintf(tvout_layer2_out_V_data_5_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_5_V, tvout_layer2_out_V_data_5_V);

		// release memory allocation
		delete [] layer2_out_V_data_5_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_5_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_5_V, wrapc_stream_size_out_layer2_out_V_data_5_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_5_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_5_V, wrapc_stream_size_out_layer2_out_V_data_5_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_5_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_5_V, wrapc_stream_size_out_layer2_out_V_data_5_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_6_V, tvout_layer2_out_V_data_6_V);

		sc_bv<16>* layer2_out_V_data_6_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_6_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (6) => (6) @ (2)
						for (int i_1 = 6; i_1 <= 6; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_6_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_6_V, "%s\n", (layer2_out_V_data_6_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_6_V, tvout_layer2_out_V_data_6_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_6_V_depth);
		sprintf(tvout_layer2_out_V_data_6_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_6_V, tvout_layer2_out_V_data_6_V);

		// release memory allocation
		delete [] layer2_out_V_data_6_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_6_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_6_V, wrapc_stream_size_out_layer2_out_V_data_6_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_6_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_6_V, wrapc_stream_size_out_layer2_out_V_data_6_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_6_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_6_V, wrapc_stream_size_out_layer2_out_V_data_6_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_V_data_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_7_V, tvout_layer2_out_V_data_7_V);

		sc_bv<16>* layer2_out_V_data_7_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_10 - aesl_tmp_11];

		// RTL Name: layer2_out_V_data_7_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.data.V(15, 0)
				{
					// carray: (aesl_tmp_11) => (aesl_tmp_10 - 1) @ (1)
					for (int i_0 = aesl_tmp_11; i_0 <= aesl_tmp_10 - 1; i_0 += 1)
					{
						// carray: (7) => (7) @ (2)
						for (int i_1 = 7; i_1 <= 7; i_1 += 2)
						{
							// sub                   : i_0 i_1
							// ori_name              : aesl_tmp_9[i_0].data[i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : aesl_tmp_9[0].data[0]
							// regulate_c_name       : layer2_out_V_data_V
							// input_type_conversion : (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str()
							if (&(aesl_tmp_9[0].data[0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<16> layer2_out_V_data_V_tmp_mem;
								layer2_out_V_data_V_tmp_mem = (aesl_tmp_9[i_0].data[i_1]).range().to_string(SC_BIN).c_str();
								layer2_out_V_data_7_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_data_V_tmp_mem.range(15, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_10 - aesl_tmp_11; i++)
		{
			sprintf(tvout_layer2_out_V_data_7_V, "%s\n", (layer2_out_V_data_7_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_7_V, tvout_layer2_out_V_data_7_V);
		}

		tcl_file.set_num(aesl_tmp_10 - aesl_tmp_11, &tcl_file.layer2_out_V_data_7_V_depth);
		sprintf(tvout_layer2_out_V_data_7_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_V_data_7_V, tvout_layer2_out_V_data_7_V);

		// release memory allocation
		delete [] layer2_out_V_data_7_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_V_data_7_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_7_V, wrapc_stream_size_out_layer2_out_V_data_7_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_7_V, "%d\n", aesl_tmp_10 - aesl_tmp_11);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_7_V, wrapc_stream_size_out_layer2_out_V_data_7_V);
		sprintf(wrapc_stream_size_out_layer2_out_V_data_7_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_V_data_7_V, wrapc_stream_size_out_layer2_out_V_data_7_V);

		// push back output stream: "layer2_out"
		for (int i = 0; i < aesl_tmp_10; i++)
		{
			layer2_out.write(aesl_tmp_9[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "input_1_V_data_0_V"
		delete [] tvin_input_1_V_data_0_V;
		delete [] wrapc_stream_size_in_input_1_V_data_0_V;
		// release memory allocation: "input_1_V_data_1_V"
		delete [] tvin_input_1_V_data_1_V;
		delete [] wrapc_stream_size_in_input_1_V_data_1_V;
		// release memory allocation: "input_1_V_data_2_V"
		delete [] tvin_input_1_V_data_2_V;
		delete [] wrapc_stream_size_in_input_1_V_data_2_V;
		// release memory allocation: "input_1_V_data_3_V"
		delete [] tvin_input_1_V_data_3_V;
		delete [] wrapc_stream_size_in_input_1_V_data_3_V;
		// release memory allocation: "input_1_V_data_4_V"
		delete [] tvin_input_1_V_data_4_V;
		delete [] wrapc_stream_size_in_input_1_V_data_4_V;
		// release memory allocation: "input_1_V_data_5_V"
		delete [] tvin_input_1_V_data_5_V;
		delete [] wrapc_stream_size_in_input_1_V_data_5_V;
		// release memory allocation: "input_1_V_data_6_V"
		delete [] tvin_input_1_V_data_6_V;
		delete [] wrapc_stream_size_in_input_1_V_data_6_V;
		// release memory allocation: "input_1_V_data_7_V"
		delete [] tvin_input_1_V_data_7_V;
		delete [] wrapc_stream_size_in_input_1_V_data_7_V;
		// release memory allocation: "layer2_out_V_data_0_V"
		delete [] tvout_layer2_out_V_data_0_V;
		delete [] tvin_layer2_out_V_data_0_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_0_V;
		// release memory allocation: "layer2_out_V_data_1_V"
		delete [] tvout_layer2_out_V_data_1_V;
		delete [] tvin_layer2_out_V_data_1_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_1_V;
		// release memory allocation: "layer2_out_V_data_2_V"
		delete [] tvout_layer2_out_V_data_2_V;
		delete [] tvin_layer2_out_V_data_2_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_2_V;
		// release memory allocation: "layer2_out_V_data_3_V"
		delete [] tvout_layer2_out_V_data_3_V;
		delete [] tvin_layer2_out_V_data_3_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_3_V;
		// release memory allocation: "layer2_out_V_data_4_V"
		delete [] tvout_layer2_out_V_data_4_V;
		delete [] tvin_layer2_out_V_data_4_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_4_V;
		// release memory allocation: "layer2_out_V_data_5_V"
		delete [] tvout_layer2_out_V_data_5_V;
		delete [] tvin_layer2_out_V_data_5_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_5_V;
		// release memory allocation: "layer2_out_V_data_6_V"
		delete [] tvout_layer2_out_V_data_6_V;
		delete [] tvin_layer2_out_V_data_6_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_6_V;
		// release memory allocation: "layer2_out_V_data_7_V"
		delete [] tvout_layer2_out_V_data_7_V;
		delete [] tvin_layer2_out_V_data_7_V;
		delete [] wrapc_stream_size_out_layer2_out_V_data_7_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

