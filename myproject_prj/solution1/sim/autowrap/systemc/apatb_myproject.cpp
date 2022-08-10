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


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "input_1_0_V_V"
#define AUTOTB_TVIN_input_1_0_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_0_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_0_V_V  "../tv/stream_size/stream_size_in_input_1_0_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V  "../tv/stream_size/stream_ingress_status_input_1_0_V_V.dat"
// wrapc file define: "input_1_1_V_V"
#define AUTOTB_TVIN_input_1_1_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_1_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_1_V_V  "../tv/stream_size/stream_size_in_input_1_1_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V  "../tv/stream_size/stream_ingress_status_input_1_1_V_V.dat"
// wrapc file define: "input_1_2_V_V"
#define AUTOTB_TVIN_input_1_2_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_2_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_2_V_V  "../tv/stream_size/stream_size_in_input_1_2_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V  "../tv/stream_size/stream_ingress_status_input_1_2_V_V.dat"
// wrapc file define: "input_1_3_V_V"
#define AUTOTB_TVIN_input_1_3_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_3_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_3_V_V  "../tv/stream_size/stream_size_in_input_1_3_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V  "../tv/stream_size/stream_ingress_status_input_1_3_V_V.dat"
// wrapc file define: "input_1_4_V_V"
#define AUTOTB_TVIN_input_1_4_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_4_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_4_V_V  "../tv/stream_size/stream_size_in_input_1_4_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V  "../tv/stream_size/stream_ingress_status_input_1_4_V_V.dat"
// wrapc file define: "input_1_5_V_V"
#define AUTOTB_TVIN_input_1_5_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_5_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_5_V_V  "../tv/stream_size/stream_size_in_input_1_5_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V  "../tv/stream_size/stream_ingress_status_input_1_5_V_V.dat"
// wrapc file define: "input_1_6_V_V"
#define AUTOTB_TVIN_input_1_6_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_6_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_6_V_V  "../tv/stream_size/stream_size_in_input_1_6_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V  "../tv/stream_size/stream_ingress_status_input_1_6_V_V.dat"
// wrapc file define: "input_1_7_V_V"
#define AUTOTB_TVIN_input_1_7_V_V  "../tv/cdatafile/c.myproject.autotvin_input_1_7_V_V.dat"
#define WRAPC_STREAM_SIZE_IN_input_1_7_V_V  "../tv/stream_size/stream_size_in_input_1_7_V_V.dat"
#define WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V  "../tv/stream_size/stream_ingress_status_input_1_7_V_V.dat"
// wrapc file define: "layer2_out_0_V_V"
#define AUTOTB_TVOUT_layer2_out_0_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_0_V_V.dat"
#define AUTOTB_TVIN_layer2_out_0_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_0_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V  "../tv/stream_size/stream_size_out_layer2_out_0_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_0_V_V  "../tv/stream_size/stream_egress_status_layer2_out_0_V_V.dat"
// wrapc file define: "layer2_out_1_V_V"
#define AUTOTB_TVOUT_layer2_out_1_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_1_V_V.dat"
#define AUTOTB_TVIN_layer2_out_1_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_1_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_1_V_V  "../tv/stream_size/stream_size_out_layer2_out_1_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_1_V_V  "../tv/stream_size/stream_egress_status_layer2_out_1_V_V.dat"
// wrapc file define: "layer2_out_2_V_V"
#define AUTOTB_TVOUT_layer2_out_2_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_2_V_V.dat"
#define AUTOTB_TVIN_layer2_out_2_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_2_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_2_V_V  "../tv/stream_size/stream_size_out_layer2_out_2_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_2_V_V  "../tv/stream_size/stream_egress_status_layer2_out_2_V_V.dat"
// wrapc file define: "layer2_out_3_V_V"
#define AUTOTB_TVOUT_layer2_out_3_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_3_V_V.dat"
#define AUTOTB_TVIN_layer2_out_3_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_3_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_3_V_V  "../tv/stream_size/stream_size_out_layer2_out_3_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_3_V_V  "../tv/stream_size/stream_egress_status_layer2_out_3_V_V.dat"
// wrapc file define: "layer2_out_4_V_V"
#define AUTOTB_TVOUT_layer2_out_4_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_4_V_V.dat"
#define AUTOTB_TVIN_layer2_out_4_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_4_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_4_V_V  "../tv/stream_size/stream_size_out_layer2_out_4_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_4_V_V  "../tv/stream_size/stream_egress_status_layer2_out_4_V_V.dat"
// wrapc file define: "layer2_out_5_V_V"
#define AUTOTB_TVOUT_layer2_out_5_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_5_V_V.dat"
#define AUTOTB_TVIN_layer2_out_5_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_5_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_5_V_V  "../tv/stream_size/stream_size_out_layer2_out_5_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_5_V_V  "../tv/stream_size/stream_egress_status_layer2_out_5_V_V.dat"
// wrapc file define: "layer2_out_6_V_V"
#define AUTOTB_TVOUT_layer2_out_6_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_6_V_V.dat"
#define AUTOTB_TVIN_layer2_out_6_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_6_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_6_V_V  "../tv/stream_size/stream_size_out_layer2_out_6_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_6_V_V  "../tv/stream_size/stream_egress_status_layer2_out_6_V_V.dat"
// wrapc file define: "layer2_out_7_V_V"
#define AUTOTB_TVOUT_layer2_out_7_V_V  "../tv/cdatafile/c.myproject.autotvout_layer2_out_7_V_V.dat"
#define AUTOTB_TVIN_layer2_out_7_V_V  "../tv/cdatafile/c.myproject.autotvin_layer2_out_7_V_V.dat"
#define WRAPC_STREAM_SIZE_OUT_layer2_out_7_V_V  "../tv/stream_size/stream_size_out_layer2_out_7_V_V.dat"
#define WRAPC_STREAM_EGRESS_STATUS_layer2_out_7_V_V  "../tv/stream_size/stream_egress_status_layer2_out_7_V_V.dat"
// wrapc file define: "const_size_in_1"
#define AUTOTB_TVOUT_const_size_in_1  "../tv/cdatafile/c.myproject.autotvout_const_size_in_1.dat"
// wrapc file define: "const_size_out_1"
#define AUTOTB_TVOUT_const_size_out_1  "../tv/cdatafile/c.myproject.autotvout_const_size_out_1.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer2_out_0_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_0_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_0_V_V.dat"
// tvout file define: "layer2_out_1_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_1_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_1_V_V.dat"
// tvout file define: "layer2_out_2_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_2_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_2_V_V.dat"
// tvout file define: "layer2_out_3_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_3_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_3_V_V.dat"
// tvout file define: "layer2_out_4_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_4_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_4_V_V.dat"
// tvout file define: "layer2_out_5_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_5_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_5_V_V.dat"
// tvout file define: "layer2_out_6_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_6_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_6_V_V.dat"
// tvout file define: "layer2_out_7_V_V"
#define AUTOTB_TVOUT_PC_layer2_out_7_V_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer2_out_7_V_V.dat"
// tvout file define: "const_size_in_1"
#define AUTOTB_TVOUT_PC_const_size_in_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_in_1.dat"
// tvout file define: "const_size_out_1"
#define AUTOTB_TVOUT_PC_const_size_out_1  "../tv/rtldatafile/rtl.myproject.autotvout_const_size_out_1.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			input_1_0_V_V_depth = 0;
			input_1_1_V_V_depth = 0;
			input_1_2_V_V_depth = 0;
			input_1_3_V_V_depth = 0;
			input_1_4_V_V_depth = 0;
			input_1_5_V_V_depth = 0;
			input_1_6_V_V_depth = 0;
			input_1_7_V_V_depth = 0;
			layer2_out_0_V_V_depth = 0;
			layer2_out_1_V_V_depth = 0;
			layer2_out_2_V_V_depth = 0;
			layer2_out_3_V_V_depth = 0;
			layer2_out_4_V_V_depth = 0;
			layer2_out_5_V_V_depth = 0;
			layer2_out_6_V_V_depth = 0;
			layer2_out_7_V_V_depth = 0;
			const_size_in_1_depth = 0;
			const_size_out_1_depth = 0;
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
			total_list << "{input_1_0_V_V " << input_1_0_V_V_depth << "}\n";
			total_list << "{input_1_1_V_V " << input_1_1_V_V_depth << "}\n";
			total_list << "{input_1_2_V_V " << input_1_2_V_V_depth << "}\n";
			total_list << "{input_1_3_V_V " << input_1_3_V_V_depth << "}\n";
			total_list << "{input_1_4_V_V " << input_1_4_V_V_depth << "}\n";
			total_list << "{input_1_5_V_V " << input_1_5_V_V_depth << "}\n";
			total_list << "{input_1_6_V_V " << input_1_6_V_V_depth << "}\n";
			total_list << "{input_1_7_V_V " << input_1_7_V_V_depth << "}\n";
			total_list << "{layer2_out_0_V_V " << layer2_out_0_V_V_depth << "}\n";
			total_list << "{layer2_out_1_V_V " << layer2_out_1_V_V_depth << "}\n";
			total_list << "{layer2_out_2_V_V " << layer2_out_2_V_V_depth << "}\n";
			total_list << "{layer2_out_3_V_V " << layer2_out_3_V_V_depth << "}\n";
			total_list << "{layer2_out_4_V_V " << layer2_out_4_V_V_depth << "}\n";
			total_list << "{layer2_out_5_V_V " << layer2_out_5_V_V_depth << "}\n";
			total_list << "{layer2_out_6_V_V " << layer2_out_6_V_V_depth << "}\n";
			total_list << "{layer2_out_7_V_V " << layer2_out_7_V_V_depth << "}\n";
			total_list << "{const_size_in_1 " << const_size_in_1_depth << "}\n";
			total_list << "{const_size_out_1 " << const_size_out_1_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int input_1_0_V_V_depth;
		int input_1_1_V_V_depth;
		int input_1_2_V_V_depth;
		int input_1_3_V_V_depth;
		int input_1_4_V_V_depth;
		int input_1_5_V_V_depth;
		int input_1_6_V_V_depth;
		int input_1_7_V_V_depth;
		int layer2_out_0_V_V_depth;
		int layer2_out_1_V_V_depth;
		int layer2_out_2_V_V_depth;
		int layer2_out_3_V_V_depth;
		int layer2_out_4_V_V_depth;
		int layer2_out_5_V_V_depth;
		int layer2_out_6_V_V_depth;
		int layer2_out_7_V_V_depth;
		int const_size_in_1_depth;
		int const_size_out_1_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void myproject (
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > input_1[8],
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > layer2_out[8],
unsigned short (&const_size_in_1),
unsigned short (&const_size_out_1));

void AESL_WRAP_myproject (
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > input_1[8],
hls::stream<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > layer2_out[8],
unsigned short (&const_size_in_1),
unsigned short (&const_size_out_1))
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

		// pop stream input: "input_1[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_49 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_49; i++)
			{
				input_1[0].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "input_1[1]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_52 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_52; i++)
			{
				input_1[1].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "input_1[2]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_55 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_55; i++)
			{
				input_1[2].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "input_1[3]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_58 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_58; i++)
			{
				input_1[3].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "input_1[4]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_61 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_61; i++)
			{
				input_1[4].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "input_1[5]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_64 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_64; i++)
			{
				input_1[5].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "input_1[6]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_67 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_67; i++)
			{
				input_1[6].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// pop stream input: "input_1[7]"
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // pop_size
			int aesl_tmp_70 = atoi(AESL_token.c_str());
			for (int i = 0; i < aesl_tmp_70; i++)
			{
				input_1[7].read();
			}
			aesl_fh.read(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[0]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_72;
		int aesl_tmp_73;
		int aesl_tmp_74 = 0;

		// read output stream size: "layer2_out[0]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_73 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[1]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_75;
		int aesl_tmp_76;
		int aesl_tmp_77 = 0;

		// read output stream size: "layer2_out[1]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_76 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[2]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_78;
		int aesl_tmp_79;
		int aesl_tmp_80 = 0;

		// read output stream size: "layer2_out[2]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_79 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[3]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_81;
		int aesl_tmp_82;
		int aesl_tmp_83 = 0;

		// read output stream size: "layer2_out[3]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_82 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[4]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_84;
		int aesl_tmp_85;
		int aesl_tmp_86 = 0;

		// read output stream size: "layer2_out[4]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_85 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[5]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_87;
		int aesl_tmp_88;
		int aesl_tmp_89 = 0;

		// read output stream size: "layer2_out[5]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_88 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[6]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_90;
		int aesl_tmp_91;
		int aesl_tmp_92 = 0;

		// read output stream size: "layer2_out[6]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_91 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// define output stream variables: "layer2_out[7]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_93;
		int aesl_tmp_94;
		int aesl_tmp_95 = 0;

		// read output stream size: "layer2_out[7]"
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[transaction]]
		aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // pop_size
			aesl_tmp_94 = atoi(AESL_token.c_str());
			aesl_fh.read(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, AESL_token); // [[/transaction]]
		}

		// output port post check: "layer2_out_0_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_0_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_0_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_0_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_0_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_0_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_0_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_0_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_0_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_0_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_73)
			{
				aesl_tmp_73 = i;
			}

			if (aesl_tmp_73 > 0 && aesl_tmp_72.size() < aesl_tmp_73)
			{
				int aesl_tmp_72_size = aesl_tmp_72.size();

				for (int tmp_aesl_tmp_72 = 0; tmp_aesl_tmp_72 < aesl_tmp_73 - aesl_tmp_72_size; tmp_aesl_tmp_72++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_72.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_0_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_0_0_2 = new sc_lv<16>[aesl_tmp_73 - aesl_tmp_74];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_74) => (aesl_tmp_73 - 1) @ (1)
							for (int i_0 = aesl_tmp_74; i_0 <= aesl_tmp_73 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_72[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_0_0_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_0_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_74) => (aesl_tmp_73 - 1) @ (1)
							for (int i_0 = aesl_tmp_74; i_0 <= aesl_tmp_73 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_72[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_72[0]
								// output_left_conversion : (aesl_tmp_72[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_72[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_72[i_0]).range() = (layer2_out_V_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_1_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_1_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_1_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_1_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_1_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_1_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_1_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_1_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_1_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_1_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_76)
			{
				aesl_tmp_76 = i;
			}

			if (aesl_tmp_76 > 0 && aesl_tmp_75.size() < aesl_tmp_76)
			{
				int aesl_tmp_75_size = aesl_tmp_75.size();

				for (int tmp_aesl_tmp_75 = 0; tmp_aesl_tmp_75 < aesl_tmp_76 - aesl_tmp_75_size; tmp_aesl_tmp_75++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_75.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_1_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_1_1_2 = new sc_lv<16>[aesl_tmp_76 - aesl_tmp_77];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_77) => (aesl_tmp_76 - 1) @ (1)
							for (int i_0 = aesl_tmp_77; i_0 <= aesl_tmp_76 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_75[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_1_1_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_1_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_77) => (aesl_tmp_76 - 1) @ (1)
							for (int i_0 = aesl_tmp_77; i_0 <= aesl_tmp_76 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_75[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_75[0]
								// output_left_conversion : (aesl_tmp_75[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_75[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_75[i_0]).range() = (layer2_out_V_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_2_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_2_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_2_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_2_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_2_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_2_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_2_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_2_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_2_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_2_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_79)
			{
				aesl_tmp_79 = i;
			}

			if (aesl_tmp_79 > 0 && aesl_tmp_78.size() < aesl_tmp_79)
			{
				int aesl_tmp_78_size = aesl_tmp_78.size();

				for (int tmp_aesl_tmp_78 = 0; tmp_aesl_tmp_78 < aesl_tmp_79 - aesl_tmp_78_size; tmp_aesl_tmp_78++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_78.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_2_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_2_2_2 = new sc_lv<16>[aesl_tmp_79 - aesl_tmp_80];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_80) => (aesl_tmp_79 - 1) @ (1)
							for (int i_0 = aesl_tmp_80; i_0 <= aesl_tmp_79 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_78[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_2_2_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_2_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_80) => (aesl_tmp_79 - 1) @ (1)
							for (int i_0 = aesl_tmp_80; i_0 <= aesl_tmp_79 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_78[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_78[0]
								// output_left_conversion : (aesl_tmp_78[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_78[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_78[i_0]).range() = (layer2_out_V_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_3_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_3_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_3_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_3_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_3_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_3_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_3_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_3_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_3_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_3_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_82)
			{
				aesl_tmp_82 = i;
			}

			if (aesl_tmp_82 > 0 && aesl_tmp_81.size() < aesl_tmp_82)
			{
				int aesl_tmp_81_size = aesl_tmp_81.size();

				for (int tmp_aesl_tmp_81 = 0; tmp_aesl_tmp_81 < aesl_tmp_82 - aesl_tmp_81_size; tmp_aesl_tmp_81++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_81.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_3_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_3_3_2 = new sc_lv<16>[aesl_tmp_82 - aesl_tmp_83];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_83) => (aesl_tmp_82 - 1) @ (1)
							for (int i_0 = aesl_tmp_83; i_0 <= aesl_tmp_82 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_81[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_3_3_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_3_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_83) => (aesl_tmp_82 - 1) @ (1)
							for (int i_0 = aesl_tmp_83; i_0 <= aesl_tmp_82 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_81[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_81[0]
								// output_left_conversion : (aesl_tmp_81[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_81[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_81[i_0]).range() = (layer2_out_V_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_4_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_4_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_4_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_4_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_4_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_4_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_4_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_4_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_4_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_4_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_85)
			{
				aesl_tmp_85 = i;
			}

			if (aesl_tmp_85 > 0 && aesl_tmp_84.size() < aesl_tmp_85)
			{
				int aesl_tmp_84_size = aesl_tmp_84.size();

				for (int tmp_aesl_tmp_84 = 0; tmp_aesl_tmp_84 < aesl_tmp_85 - aesl_tmp_84_size; tmp_aesl_tmp_84++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_84.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_4_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_4_4_2 = new sc_lv<16>[aesl_tmp_85 - aesl_tmp_86];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_86) => (aesl_tmp_85 - 1) @ (1)
							for (int i_0 = aesl_tmp_86; i_0 <= aesl_tmp_85 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_84[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_4_4_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_4_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_86) => (aesl_tmp_85 - 1) @ (1)
							for (int i_0 = aesl_tmp_86; i_0 <= aesl_tmp_85 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_84[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_84[0]
								// output_left_conversion : (aesl_tmp_84[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_84[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_84[i_0]).range() = (layer2_out_V_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_5_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_5_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_5_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_5_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_5_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_5_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_5_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_5_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_5_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_5_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_88)
			{
				aesl_tmp_88 = i;
			}

			if (aesl_tmp_88 > 0 && aesl_tmp_87.size() < aesl_tmp_88)
			{
				int aesl_tmp_87_size = aesl_tmp_87.size();

				for (int tmp_aesl_tmp_87 = 0; tmp_aesl_tmp_87 < aesl_tmp_88 - aesl_tmp_87_size; tmp_aesl_tmp_87++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_87.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_5_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_5_5_2 = new sc_lv<16>[aesl_tmp_88 - aesl_tmp_89];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_89) => (aesl_tmp_88 - 1) @ (1)
							for (int i_0 = aesl_tmp_89; i_0 <= aesl_tmp_88 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_87[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_5_5_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_5_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_89) => (aesl_tmp_88 - 1) @ (1)
							for (int i_0 = aesl_tmp_89; i_0 <= aesl_tmp_88 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_87[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_87[0]
								// output_left_conversion : (aesl_tmp_87[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_87[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_87[i_0]).range() = (layer2_out_V_V_lv0_5_5_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_6_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_6_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_6_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_6_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_6_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_6_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_6_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_6_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_6_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_6_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_91)
			{
				aesl_tmp_91 = i;
			}

			if (aesl_tmp_91 > 0 && aesl_tmp_90.size() < aesl_tmp_91)
			{
				int aesl_tmp_90_size = aesl_tmp_90.size();

				for (int tmp_aesl_tmp_90 = 0; tmp_aesl_tmp_90 < aesl_tmp_91 - aesl_tmp_90_size; tmp_aesl_tmp_90++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_90.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_6_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_6_6_2 = new sc_lv<16>[aesl_tmp_91 - aesl_tmp_92];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_92) => (aesl_tmp_91 - 1) @ (1)
							for (int i_0 = aesl_tmp_92; i_0 <= aesl_tmp_91 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_90[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_6_6_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_6_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_92) => (aesl_tmp_91 - 1) @ (1)
							for (int i_0 = aesl_tmp_92; i_0 <= aesl_tmp_91 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_90[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_90[0]
								// output_left_conversion : (aesl_tmp_90[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_90[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_90[i_0]).range() = (layer2_out_V_V_lv0_6_6_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "layer2_out_7_V_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_7_V_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_7_V_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_7_V_V, AESL_token); // data

			std::vector<sc_bv<16> > layer2_out_7_V_V_pc_buffer;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_7_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer2_out_7_V_V', possible cause: There are uninitialized variables in the C design." << endl;
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
					layer2_out_7_V_V_pc_buffer.push_back(AESL_token.c_str());
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer2_out_7_V_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer2_out_7_V_V))
				{
					exit(1);
				}
			}

			// correct the buffer size the current transaction
			if (i != aesl_tmp_94)
			{
				aesl_tmp_94 = i;
			}

			if (aesl_tmp_94 > 0 && aesl_tmp_93.size() < aesl_tmp_94)
			{
				int aesl_tmp_93_size = aesl_tmp_93.size();

				for (int tmp_aesl_tmp_93 = 0; tmp_aesl_tmp_93 < aesl_tmp_94 - aesl_tmp_93_size; tmp_aesl_tmp_93++)
				{
					ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> tmp;
					aesl_tmp_93.push_back(tmp);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer2_out_7_V_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer2_out.V.V(15, 0)
						// {
							sc_lv<16>* layer2_out_V_V_lv0_7_7_2 = new sc_lv<16>[aesl_tmp_94 - aesl_tmp_95];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_95) => (aesl_tmp_94 - 1) @ (1)
							for (int i_0 = aesl_tmp_95; i_0 <= aesl_tmp_94 - 1; i_0 += 1)
							{
								if (&(aesl_tmp_93[0]) != NULL) // check the null address if the c port is array or others
								{
									layer2_out_V_V_lv0_7_7_2[hls_map_index].range(15, 0) = sc_bv<16>(layer2_out_7_V_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer2_out.V.V(15, 0)
						{
							// carray: (aesl_tmp_95) => (aesl_tmp_94 - 1) @ (1)
							for (int i_0 = aesl_tmp_95; i_0 <= aesl_tmp_94 - 1; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : aesl_tmp_93[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : aesl_tmp_93[0]
								// output_left_conversion : (aesl_tmp_93[i_0]).range()
								// output_type_conversion : (layer2_out_V_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(aesl_tmp_93[0]) != NULL) // check the null address if the c port is array or others
								{
									(aesl_tmp_93[i_0]).range() = (layer2_out_V_V_lv0_7_7_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}
		}

		// output port post check: "const_size_in_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data

			sc_bv<16> *const_size_in_1_pc_buffer = new sc_bv<16>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_in_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					const_size_in_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_in_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_in_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_in_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_in_1(15, 0)
						// {
							sc_lv<16>* const_size_in_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_in_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_in_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_in_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_in_1
								// output_left_conversion : const_size_in_1
								// output_type_conversion : (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_in_1 = (const_size_in_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_in_1_pc_buffer;
		}

		// output port post check: "const_size_out_1"
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data

			sc_bv<16> *const_size_out_1_pc_buffer = new sc_bv<16>[1];
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
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
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'const_size_out_1', possible cause: There are uninitialized variables in the C design." << endl;
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
					const_size_out_1_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_const_size_out_1, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_const_size_out_1))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: const_size_out_1
				{
					// bitslice(15, 0)
					// {
						// celement: const_size_out_1(15, 0)
						// {
							sc_lv<16>* const_size_out_1_lv0_0_0_1 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1_lv0_0_0_1[hls_map_index].range(15, 0) = sc_bv<16>(const_size_out_1_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: const_size_out_1(15, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : const_size_out_1
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : const_size_out_1
								// output_left_conversion : const_size_out_1
								// output_type_conversion : (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
								{
									const_size_out_1 = (const_size_out_1_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] const_size_out_1_pc_buffer;
		}

		// push back output stream: "layer2_out[0]"
		for (int i = 0; i < aesl_tmp_73; i++)
		{
			layer2_out[0].write(aesl_tmp_72[i]);
		}

		// push back output stream: "layer2_out[1]"
		for (int i = 0; i < aesl_tmp_76; i++)
		{
			layer2_out[1].write(aesl_tmp_75[i]);
		}

		// push back output stream: "layer2_out[2]"
		for (int i = 0; i < aesl_tmp_79; i++)
		{
			layer2_out[2].write(aesl_tmp_78[i]);
		}

		// push back output stream: "layer2_out[3]"
		for (int i = 0; i < aesl_tmp_82; i++)
		{
			layer2_out[3].write(aesl_tmp_81[i]);
		}

		// push back output stream: "layer2_out[4]"
		for (int i = 0; i < aesl_tmp_85; i++)
		{
			layer2_out[4].write(aesl_tmp_84[i]);
		}

		// push back output stream: "layer2_out[5]"
		for (int i = 0; i < aesl_tmp_88; i++)
		{
			layer2_out[5].write(aesl_tmp_87[i]);
		}

		// push back output stream: "layer2_out[6]"
		for (int i = 0; i < aesl_tmp_91; i++)
		{
			layer2_out[6].write(aesl_tmp_90[i]);
		}

		// push back output stream: "layer2_out[7]"
		for (int i = 0; i < aesl_tmp_94; i++)
		{
			layer2_out[7].write(aesl_tmp_93[i]);
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "input_1_0_V_V"
		char* tvin_input_1_0_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_0_V_V);
		char* wrapc_stream_size_in_input_1_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_0_V_V);
		char* wrapc_stream_ingress_status_input_1_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V);

		// "input_1_1_V_V"
		char* tvin_input_1_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_1_V_V);
		char* wrapc_stream_size_in_input_1_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_1_V_V);
		char* wrapc_stream_ingress_status_input_1_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V);

		// "input_1_2_V_V"
		char* tvin_input_1_2_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_2_V_V);
		char* wrapc_stream_size_in_input_1_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_2_V_V);
		char* wrapc_stream_ingress_status_input_1_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V);

		// "input_1_3_V_V"
		char* tvin_input_1_3_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_3_V_V);
		char* wrapc_stream_size_in_input_1_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_3_V_V);
		char* wrapc_stream_ingress_status_input_1_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V);

		// "input_1_4_V_V"
		char* tvin_input_1_4_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_4_V_V);
		char* wrapc_stream_size_in_input_1_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_4_V_V);
		char* wrapc_stream_ingress_status_input_1_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V);

		// "input_1_5_V_V"
		char* tvin_input_1_5_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_5_V_V);
		char* wrapc_stream_size_in_input_1_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_5_V_V);
		char* wrapc_stream_ingress_status_input_1_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V);

		// "input_1_6_V_V"
		char* tvin_input_1_6_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_6_V_V);
		char* wrapc_stream_size_in_input_1_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_6_V_V);
		char* wrapc_stream_ingress_status_input_1_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V);

		// "input_1_7_V_V"
		char* tvin_input_1_7_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_input_1_7_V_V);
		char* wrapc_stream_size_in_input_1_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_IN_input_1_7_V_V);
		char* wrapc_stream_ingress_status_input_1_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V);

		// "layer2_out_0_V_V"
		char* tvin_layer2_out_0_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_0_V_V);
		char* tvout_layer2_out_0_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_0_V_V);
		char* wrapc_stream_size_out_layer2_out_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V);
		char* wrapc_stream_egress_status_layer2_out_0_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_0_V_V);

		// "layer2_out_1_V_V"
		char* tvin_layer2_out_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_1_V_V);
		char* tvout_layer2_out_1_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_1_V_V);
		char* wrapc_stream_size_out_layer2_out_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_1_V_V);
		char* wrapc_stream_egress_status_layer2_out_1_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_1_V_V);

		// "layer2_out_2_V_V"
		char* tvin_layer2_out_2_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_2_V_V);
		char* tvout_layer2_out_2_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_2_V_V);
		char* wrapc_stream_size_out_layer2_out_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_2_V_V);
		char* wrapc_stream_egress_status_layer2_out_2_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_2_V_V);

		// "layer2_out_3_V_V"
		char* tvin_layer2_out_3_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_3_V_V);
		char* tvout_layer2_out_3_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_3_V_V);
		char* wrapc_stream_size_out_layer2_out_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_3_V_V);
		char* wrapc_stream_egress_status_layer2_out_3_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_3_V_V);

		// "layer2_out_4_V_V"
		char* tvin_layer2_out_4_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_4_V_V);
		char* tvout_layer2_out_4_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_4_V_V);
		char* wrapc_stream_size_out_layer2_out_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_4_V_V);
		char* wrapc_stream_egress_status_layer2_out_4_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_4_V_V);

		// "layer2_out_5_V_V"
		char* tvin_layer2_out_5_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_5_V_V);
		char* tvout_layer2_out_5_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_5_V_V);
		char* wrapc_stream_size_out_layer2_out_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_5_V_V);
		char* wrapc_stream_egress_status_layer2_out_5_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_5_V_V);

		// "layer2_out_6_V_V"
		char* tvin_layer2_out_6_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_6_V_V);
		char* tvout_layer2_out_6_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_6_V_V);
		char* wrapc_stream_size_out_layer2_out_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_6_V_V);
		char* wrapc_stream_egress_status_layer2_out_6_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_6_V_V);

		// "layer2_out_7_V_V"
		char* tvin_layer2_out_7_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_layer2_out_7_V_V);
		char* tvout_layer2_out_7_V_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer2_out_7_V_V);
		char* wrapc_stream_size_out_layer2_out_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_SIZE_OUT_layer2_out_7_V_V);
		char* wrapc_stream_egress_status_layer2_out_7_V_V = new char[50];
		aesl_fh.touch(WRAPC_STREAM_EGRESS_STATUS_layer2_out_7_V_V);

		// "const_size_in_1"
		char* tvout_const_size_in_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_in_1);

		// "const_size_out_1"
		char* tvout_const_size_out_1 = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_const_size_out_1);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// dump stream tvin: "input_1[0]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_48;
		int aesl_tmp_49 = 0;
		while (!input_1[0].empty())
		{
			aesl_tmp_48.push_back(input_1[0].read());
			aesl_tmp_49++;
		}

		// dump stream tvin: "input_1[1]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_51;
		int aesl_tmp_52 = 0;
		while (!input_1[1].empty())
		{
			aesl_tmp_51.push_back(input_1[1].read());
			aesl_tmp_52++;
		}

		// dump stream tvin: "input_1[2]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_54;
		int aesl_tmp_55 = 0;
		while (!input_1[2].empty())
		{
			aesl_tmp_54.push_back(input_1[2].read());
			aesl_tmp_55++;
		}

		// dump stream tvin: "input_1[3]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_57;
		int aesl_tmp_58 = 0;
		while (!input_1[3].empty())
		{
			aesl_tmp_57.push_back(input_1[3].read());
			aesl_tmp_58++;
		}

		// dump stream tvin: "input_1[4]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_60;
		int aesl_tmp_61 = 0;
		while (!input_1[4].empty())
		{
			aesl_tmp_60.push_back(input_1[4].read());
			aesl_tmp_61++;
		}

		// dump stream tvin: "input_1[5]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_63;
		int aesl_tmp_64 = 0;
		while (!input_1[5].empty())
		{
			aesl_tmp_63.push_back(input_1[5].read());
			aesl_tmp_64++;
		}

		// dump stream tvin: "input_1[6]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_66;
		int aesl_tmp_67 = 0;
		while (!input_1[6].empty())
		{
			aesl_tmp_66.push_back(input_1[6].read());
			aesl_tmp_67++;
		}

		// dump stream tvin: "input_1[7]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_69;
		int aesl_tmp_70 = 0;
		while (!input_1[7].empty())
		{
			aesl_tmp_69.push_back(input_1[7].read());
			aesl_tmp_70++;
		}

		// dump stream tvin: "layer2_out[0]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_72;
		int aesl_tmp_73 = 0;
		while (!layer2_out[0].empty())
		{
			aesl_tmp_72.push_back(layer2_out[0].read());
			aesl_tmp_73++;
		}

		// dump stream tvin: "layer2_out[1]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_75;
		int aesl_tmp_76 = 0;
		while (!layer2_out[1].empty())
		{
			aesl_tmp_75.push_back(layer2_out[1].read());
			aesl_tmp_76++;
		}

		// dump stream tvin: "layer2_out[2]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_78;
		int aesl_tmp_79 = 0;
		while (!layer2_out[2].empty())
		{
			aesl_tmp_78.push_back(layer2_out[2].read());
			aesl_tmp_79++;
		}

		// dump stream tvin: "layer2_out[3]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_81;
		int aesl_tmp_82 = 0;
		while (!layer2_out[3].empty())
		{
			aesl_tmp_81.push_back(layer2_out[3].read());
			aesl_tmp_82++;
		}

		// dump stream tvin: "layer2_out[4]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_84;
		int aesl_tmp_85 = 0;
		while (!layer2_out[4].empty())
		{
			aesl_tmp_84.push_back(layer2_out[4].read());
			aesl_tmp_85++;
		}

		// dump stream tvin: "layer2_out[5]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_87;
		int aesl_tmp_88 = 0;
		while (!layer2_out[5].empty())
		{
			aesl_tmp_87.push_back(layer2_out[5].read());
			aesl_tmp_88++;
		}

		// dump stream tvin: "layer2_out[6]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_90;
		int aesl_tmp_91 = 0;
		while (!layer2_out[6].empty())
		{
			aesl_tmp_90.push_back(layer2_out[6].read());
			aesl_tmp_91++;
		}

		// dump stream tvin: "layer2_out[7]"
		std::vector<ap_fixed<16, 14, (ap_q_mode) 5, (ap_o_mode)3, 0> > aesl_tmp_93;
		int aesl_tmp_94 = 0;
		while (!layer2_out[7].empty())
		{
			aesl_tmp_93.push_back(layer2_out[7].read());
			aesl_tmp_94++;
		}

		// push back input stream: "input_1[0]"
		for (int i = 0; i < aesl_tmp_49; i++)
		{
			input_1[0].write(aesl_tmp_48[i]);
		}

		// push back input stream: "input_1[1]"
		for (int i = 0; i < aesl_tmp_52; i++)
		{
			input_1[1].write(aesl_tmp_51[i]);
		}

		// push back input stream: "input_1[2]"
		for (int i = 0; i < aesl_tmp_55; i++)
		{
			input_1[2].write(aesl_tmp_54[i]);
		}

		// push back input stream: "input_1[3]"
		for (int i = 0; i < aesl_tmp_58; i++)
		{
			input_1[3].write(aesl_tmp_57[i]);
		}

		// push back input stream: "input_1[4]"
		for (int i = 0; i < aesl_tmp_61; i++)
		{
			input_1[4].write(aesl_tmp_60[i]);
		}

		// push back input stream: "input_1[5]"
		for (int i = 0; i < aesl_tmp_64; i++)
		{
			input_1[5].write(aesl_tmp_63[i]);
		}

		// push back input stream: "input_1[6]"
		for (int i = 0; i < aesl_tmp_67; i++)
		{
			input_1[6].write(aesl_tmp_66[i]);
		}

		// push back input stream: "input_1[7]"
		for (int i = 0; i < aesl_tmp_70; i++)
		{
			input_1[7].write(aesl_tmp_69[i]);
		}

		// push back input stream: "layer2_out[0]"
		for (int i = 0; i < aesl_tmp_73; i++)
		{
			layer2_out[0].write(aesl_tmp_72[i]);
		}

		// push back input stream: "layer2_out[1]"
		for (int i = 0; i < aesl_tmp_76; i++)
		{
			layer2_out[1].write(aesl_tmp_75[i]);
		}

		// push back input stream: "layer2_out[2]"
		for (int i = 0; i < aesl_tmp_79; i++)
		{
			layer2_out[2].write(aesl_tmp_78[i]);
		}

		// push back input stream: "layer2_out[3]"
		for (int i = 0; i < aesl_tmp_82; i++)
		{
			layer2_out[3].write(aesl_tmp_81[i]);
		}

		// push back input stream: "layer2_out[4]"
		for (int i = 0; i < aesl_tmp_85; i++)
		{
			layer2_out[4].write(aesl_tmp_84[i]);
		}

		// push back input stream: "layer2_out[5]"
		for (int i = 0; i < aesl_tmp_88; i++)
		{
			layer2_out[5].write(aesl_tmp_87[i]);
		}

		// push back input stream: "layer2_out[6]"
		for (int i = 0; i < aesl_tmp_91; i++)
		{
			layer2_out[6].write(aesl_tmp_90[i]);
		}

		// push back input stream: "layer2_out[7]"
		for (int i = 0; i < aesl_tmp_94; i++)
		{
			layer2_out[7].write(aesl_tmp_93[i]);
		}

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		myproject(input_1, layer2_out, const_size_in_1, const_size_out_1);

		CodeState = DUMP_OUTPUTS;
		// record input size to tv3: "input_1[0]"
		int aesl_tmp_50 = input_1[0].size();

		// record input size to tv3: "input_1[1]"
		int aesl_tmp_53 = input_1[1].size();

		// record input size to tv3: "input_1[2]"
		int aesl_tmp_56 = input_1[2].size();

		// record input size to tv3: "input_1[3]"
		int aesl_tmp_59 = input_1[3].size();

		// record input size to tv3: "input_1[4]"
		int aesl_tmp_62 = input_1[4].size();

		// record input size to tv3: "input_1[5]"
		int aesl_tmp_65 = input_1[5].size();

		// record input size to tv3: "input_1[6]"
		int aesl_tmp_68 = input_1[6].size();

		// record input size to tv3: "input_1[7]"
		int aesl_tmp_71 = input_1[7].size();

		// pop output stream: "layer2_out[0]"
		int aesl_tmp_74 = aesl_tmp_73;
		aesl_tmp_73 = 0;
     aesl_tmp_72.clear();
		while (!layer2_out[0].empty())
		{
			aesl_tmp_72.push_back(layer2_out[0].read());
			aesl_tmp_73++;
		}

		// pop output stream: "layer2_out[1]"
		int aesl_tmp_77 = aesl_tmp_76;
		aesl_tmp_76 = 0;
     aesl_tmp_75.clear();
		while (!layer2_out[1].empty())
		{
			aesl_tmp_75.push_back(layer2_out[1].read());
			aesl_tmp_76++;
		}

		// pop output stream: "layer2_out[2]"
		int aesl_tmp_80 = aesl_tmp_79;
		aesl_tmp_79 = 0;
     aesl_tmp_78.clear();
		while (!layer2_out[2].empty())
		{
			aesl_tmp_78.push_back(layer2_out[2].read());
			aesl_tmp_79++;
		}

		// pop output stream: "layer2_out[3]"
		int aesl_tmp_83 = aesl_tmp_82;
		aesl_tmp_82 = 0;
     aesl_tmp_81.clear();
		while (!layer2_out[3].empty())
		{
			aesl_tmp_81.push_back(layer2_out[3].read());
			aesl_tmp_82++;
		}

		// pop output stream: "layer2_out[4]"
		int aesl_tmp_86 = aesl_tmp_85;
		aesl_tmp_85 = 0;
     aesl_tmp_84.clear();
		while (!layer2_out[4].empty())
		{
			aesl_tmp_84.push_back(layer2_out[4].read());
			aesl_tmp_85++;
		}

		// pop output stream: "layer2_out[5]"
		int aesl_tmp_89 = aesl_tmp_88;
		aesl_tmp_88 = 0;
     aesl_tmp_87.clear();
		while (!layer2_out[5].empty())
		{
			aesl_tmp_87.push_back(layer2_out[5].read());
			aesl_tmp_88++;
		}

		// pop output stream: "layer2_out[6]"
		int aesl_tmp_92 = aesl_tmp_91;
		aesl_tmp_91 = 0;
     aesl_tmp_90.clear();
		while (!layer2_out[6].empty())
		{
			aesl_tmp_90.push_back(layer2_out[6].read());
			aesl_tmp_91++;
		}

		// pop output stream: "layer2_out[7]"
		int aesl_tmp_95 = aesl_tmp_94;
		aesl_tmp_94 = 0;
     aesl_tmp_93.clear();
		while (!layer2_out[7].empty())
		{
			aesl_tmp_93.push_back(layer2_out[7].read());
			aesl_tmp_94++;
		}

		// [[transaction]]
		sprintf(tvin_input_1_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_0_V_V, tvin_input_1_0_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, tvin_input_1_0_V_V);

		sc_bv<16>* input_1_0_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_49 - aesl_tmp_50];

		// RTL Name: input_1_0_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_49 - aesl_tmp_50 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_49 - aesl_tmp_50 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_48[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_48[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_48[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_48[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_48[i_0]).range().to_string(SC_BIN).c_str();
							input_1_0_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_49 - aesl_tmp_50; i++)
		{
			sprintf(tvin_input_1_0_V_V, "%s\n", (input_1_0_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_0_V_V, tvin_input_1_0_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_49 > aesl_tmp_50)
     {
		sc_int<32> stream_ingress_size_input_1_0_V_V = aesl_tmp_49;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, stream_ingress_size_input_1_0_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, "\n");

		for (int i = 0; i < aesl_tmp_49 - aesl_tmp_50; i++)
		{
			stream_ingress_size_input_1_0_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, stream_ingress_size_input_1_0_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_0_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, stream_ingress_size_input_1_0_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_49 - aesl_tmp_50, &tcl_file.input_1_0_V_V_depth);
		sprintf(tvin_input_1_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_0_V_V, tvin_input_1_0_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_0_V_V, tvin_input_1_0_V_V);

		// release memory allocation
		delete [] input_1_0_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, wrapc_stream_size_in_input_1_0_V_V);
		sprintf(wrapc_stream_size_in_input_1_0_V_V, "%d\n", aesl_tmp_49 - aesl_tmp_50);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, wrapc_stream_size_in_input_1_0_V_V);
		sprintf(wrapc_stream_size_in_input_1_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_0_V_V, wrapc_stream_size_in_input_1_0_V_V);

		// [[transaction]]
		sprintf(tvin_input_1_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_1_V_V, tvin_input_1_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, tvin_input_1_1_V_V);

		sc_bv<16>* input_1_1_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_52 - aesl_tmp_53];

		// RTL Name: input_1_1_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_52 - aesl_tmp_53 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_52 - aesl_tmp_53 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_51[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_51[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_51[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_51[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_51[i_0]).range().to_string(SC_BIN).c_str();
							input_1_1_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_52 - aesl_tmp_53; i++)
		{
			sprintf(tvin_input_1_1_V_V, "%s\n", (input_1_1_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_1_V_V, tvin_input_1_1_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_52 > aesl_tmp_53)
     {
		sc_int<32> stream_ingress_size_input_1_1_V_V = aesl_tmp_52;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, stream_ingress_size_input_1_1_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, "\n");

		for (int i = 0; i < aesl_tmp_52 - aesl_tmp_53; i++)
		{
			stream_ingress_size_input_1_1_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, stream_ingress_size_input_1_1_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_1_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, stream_ingress_size_input_1_1_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_52 - aesl_tmp_53, &tcl_file.input_1_1_V_V_depth);
		sprintf(tvin_input_1_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_1_V_V, tvin_input_1_1_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_1_V_V, tvin_input_1_1_V_V);

		// release memory allocation
		delete [] input_1_1_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_1_V_V, wrapc_stream_size_in_input_1_1_V_V);
		sprintf(wrapc_stream_size_in_input_1_1_V_V, "%d\n", aesl_tmp_52 - aesl_tmp_53);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_1_V_V, wrapc_stream_size_in_input_1_1_V_V);
		sprintf(wrapc_stream_size_in_input_1_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_1_V_V, wrapc_stream_size_in_input_1_1_V_V);

		// [[transaction]]
		sprintf(tvin_input_1_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_2_V_V, tvin_input_1_2_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, tvin_input_1_2_V_V);

		sc_bv<16>* input_1_2_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_55 - aesl_tmp_56];

		// RTL Name: input_1_2_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_55 - aesl_tmp_56 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_55 - aesl_tmp_56 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_54[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_54[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_54[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_54[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_54[i_0]).range().to_string(SC_BIN).c_str();
							input_1_2_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_55 - aesl_tmp_56; i++)
		{
			sprintf(tvin_input_1_2_V_V, "%s\n", (input_1_2_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_2_V_V, tvin_input_1_2_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_55 > aesl_tmp_56)
     {
		sc_int<32> stream_ingress_size_input_1_2_V_V = aesl_tmp_55;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, stream_ingress_size_input_1_2_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, "\n");

		for (int i = 0; i < aesl_tmp_55 - aesl_tmp_56; i++)
		{
			stream_ingress_size_input_1_2_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, stream_ingress_size_input_1_2_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_2_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, stream_ingress_size_input_1_2_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_55 - aesl_tmp_56, &tcl_file.input_1_2_V_V_depth);
		sprintf(tvin_input_1_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_2_V_V, tvin_input_1_2_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_2_V_V, tvin_input_1_2_V_V);

		// release memory allocation
		delete [] input_1_2_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_2_V_V, wrapc_stream_size_in_input_1_2_V_V);
		sprintf(wrapc_stream_size_in_input_1_2_V_V, "%d\n", aesl_tmp_55 - aesl_tmp_56);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_2_V_V, wrapc_stream_size_in_input_1_2_V_V);
		sprintf(wrapc_stream_size_in_input_1_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_2_V_V, wrapc_stream_size_in_input_1_2_V_V);

		// [[transaction]]
		sprintf(tvin_input_1_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_3_V_V, tvin_input_1_3_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, tvin_input_1_3_V_V);

		sc_bv<16>* input_1_3_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_58 - aesl_tmp_59];

		// RTL Name: input_1_3_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_58 - aesl_tmp_59 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_58 - aesl_tmp_59 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_57[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_57[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_57[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_57[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_57[i_0]).range().to_string(SC_BIN).c_str();
							input_1_3_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_58 - aesl_tmp_59; i++)
		{
			sprintf(tvin_input_1_3_V_V, "%s\n", (input_1_3_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_3_V_V, tvin_input_1_3_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_58 > aesl_tmp_59)
     {
		sc_int<32> stream_ingress_size_input_1_3_V_V = aesl_tmp_58;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, stream_ingress_size_input_1_3_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, "\n");

		for (int i = 0; i < aesl_tmp_58 - aesl_tmp_59; i++)
		{
			stream_ingress_size_input_1_3_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, stream_ingress_size_input_1_3_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_3_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, stream_ingress_size_input_1_3_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_58 - aesl_tmp_59, &tcl_file.input_1_3_V_V_depth);
		sprintf(tvin_input_1_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_3_V_V, tvin_input_1_3_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_3_V_V, tvin_input_1_3_V_V);

		// release memory allocation
		delete [] input_1_3_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_3_V_V, wrapc_stream_size_in_input_1_3_V_V);
		sprintf(wrapc_stream_size_in_input_1_3_V_V, "%d\n", aesl_tmp_58 - aesl_tmp_59);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_3_V_V, wrapc_stream_size_in_input_1_3_V_V);
		sprintf(wrapc_stream_size_in_input_1_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_3_V_V, wrapc_stream_size_in_input_1_3_V_V);

		// [[transaction]]
		sprintf(tvin_input_1_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_4_V_V, tvin_input_1_4_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, tvin_input_1_4_V_V);

		sc_bv<16>* input_1_4_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_61 - aesl_tmp_62];

		// RTL Name: input_1_4_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_61 - aesl_tmp_62 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_61 - aesl_tmp_62 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_60[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_60[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_60[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_60[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_60[i_0]).range().to_string(SC_BIN).c_str();
							input_1_4_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_61 - aesl_tmp_62; i++)
		{
			sprintf(tvin_input_1_4_V_V, "%s\n", (input_1_4_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_4_V_V, tvin_input_1_4_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_61 > aesl_tmp_62)
     {
		sc_int<32> stream_ingress_size_input_1_4_V_V = aesl_tmp_61;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, stream_ingress_size_input_1_4_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, "\n");

		for (int i = 0; i < aesl_tmp_61 - aesl_tmp_62; i++)
		{
			stream_ingress_size_input_1_4_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, stream_ingress_size_input_1_4_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_4_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, stream_ingress_size_input_1_4_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_61 - aesl_tmp_62, &tcl_file.input_1_4_V_V_depth);
		sprintf(tvin_input_1_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_4_V_V, tvin_input_1_4_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_4_V_V, tvin_input_1_4_V_V);

		// release memory allocation
		delete [] input_1_4_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_4_V_V, wrapc_stream_size_in_input_1_4_V_V);
		sprintf(wrapc_stream_size_in_input_1_4_V_V, "%d\n", aesl_tmp_61 - aesl_tmp_62);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_4_V_V, wrapc_stream_size_in_input_1_4_V_V);
		sprintf(wrapc_stream_size_in_input_1_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_4_V_V, wrapc_stream_size_in_input_1_4_V_V);

		// [[transaction]]
		sprintf(tvin_input_1_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_5_V_V, tvin_input_1_5_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, tvin_input_1_5_V_V);

		sc_bv<16>* input_1_5_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_64 - aesl_tmp_65];

		// RTL Name: input_1_5_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_64 - aesl_tmp_65 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_64 - aesl_tmp_65 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_63[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_63[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_63[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_63[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_63[i_0]).range().to_string(SC_BIN).c_str();
							input_1_5_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_64 - aesl_tmp_65; i++)
		{
			sprintf(tvin_input_1_5_V_V, "%s\n", (input_1_5_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_5_V_V, tvin_input_1_5_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_64 > aesl_tmp_65)
     {
		sc_int<32> stream_ingress_size_input_1_5_V_V = aesl_tmp_64;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, stream_ingress_size_input_1_5_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, "\n");

		for (int i = 0; i < aesl_tmp_64 - aesl_tmp_65; i++)
		{
			stream_ingress_size_input_1_5_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, stream_ingress_size_input_1_5_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_5_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, stream_ingress_size_input_1_5_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_64 - aesl_tmp_65, &tcl_file.input_1_5_V_V_depth);
		sprintf(tvin_input_1_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_5_V_V, tvin_input_1_5_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_5_V_V, tvin_input_1_5_V_V);

		// release memory allocation
		delete [] input_1_5_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_5_V_V, wrapc_stream_size_in_input_1_5_V_V);
		sprintf(wrapc_stream_size_in_input_1_5_V_V, "%d\n", aesl_tmp_64 - aesl_tmp_65);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_5_V_V, wrapc_stream_size_in_input_1_5_V_V);
		sprintf(wrapc_stream_size_in_input_1_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_5_V_V, wrapc_stream_size_in_input_1_5_V_V);

		// [[transaction]]
		sprintf(tvin_input_1_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_6_V_V, tvin_input_1_6_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, tvin_input_1_6_V_V);

		sc_bv<16>* input_1_6_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_67 - aesl_tmp_68];

		// RTL Name: input_1_6_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_67 - aesl_tmp_68 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_67 - aesl_tmp_68 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_66[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_66[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_66[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_66[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_66[i_0]).range().to_string(SC_BIN).c_str();
							input_1_6_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_67 - aesl_tmp_68; i++)
		{
			sprintf(tvin_input_1_6_V_V, "%s\n", (input_1_6_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_6_V_V, tvin_input_1_6_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_67 > aesl_tmp_68)
     {
		sc_int<32> stream_ingress_size_input_1_6_V_V = aesl_tmp_67;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, stream_ingress_size_input_1_6_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, "\n");

		for (int i = 0; i < aesl_tmp_67 - aesl_tmp_68; i++)
		{
			stream_ingress_size_input_1_6_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, stream_ingress_size_input_1_6_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_6_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, stream_ingress_size_input_1_6_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_67 - aesl_tmp_68, &tcl_file.input_1_6_V_V_depth);
		sprintf(tvin_input_1_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_6_V_V, tvin_input_1_6_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_6_V_V, tvin_input_1_6_V_V);

		// release memory allocation
		delete [] input_1_6_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_6_V_V, wrapc_stream_size_in_input_1_6_V_V);
		sprintf(wrapc_stream_size_in_input_1_6_V_V, "%d\n", aesl_tmp_67 - aesl_tmp_68);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_6_V_V, wrapc_stream_size_in_input_1_6_V_V);
		sprintf(wrapc_stream_size_in_input_1_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_6_V_V, wrapc_stream_size_in_input_1_6_V_V);

		// [[transaction]]
		sprintf(tvin_input_1_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_1_7_V_V, tvin_input_1_7_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, tvin_input_1_7_V_V);

		sc_bv<16>* input_1_7_V_V_tvin_wrapc_buffer = new sc_bv<16>[aesl_tmp_70 - aesl_tmp_71];

		// RTL Name: input_1_7_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: input_1.V.V(15, 0)
				{
					// carray: (0) => (aesl_tmp_70 - aesl_tmp_71 - 1) @ (1)
					for (int i_0 = 0; i_0 <= aesl_tmp_70 - aesl_tmp_71 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_69[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_69[0]
						// regulate_c_name       : input_1_V_V
						// input_type_conversion : (aesl_tmp_69[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_69[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> input_1_V_V_tmp_mem;
							input_1_V_V_tmp_mem = (aesl_tmp_69[i_0]).range().to_string(SC_BIN).c_str();
							input_1_7_V_V_tvin_wrapc_buffer[hls_map_index].range(15, 0) = input_1_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_70 - aesl_tmp_71; i++)
		{
			sprintf(tvin_input_1_7_V_V, "%s\n", (input_1_7_V_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_1_7_V_V, tvin_input_1_7_V_V);
		}

		// dump stream ingress status to file
     if (aesl_tmp_70 > aesl_tmp_71)
     {
		sc_int<32> stream_ingress_size_input_1_7_V_V = aesl_tmp_70;
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, stream_ingress_size_input_1_7_V_V.to_string().c_str());
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, "\n");

		for (int i = 0; i < aesl_tmp_70 - aesl_tmp_71; i++)
		{
			stream_ingress_size_input_1_7_V_V--;
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, stream_ingress_size_input_1_7_V_V.to_string().c_str());
			aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, "\n");
		}
     }
     else {
		    sc_int<32> stream_ingress_size_input_1_7_V_V = 0;
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, stream_ingress_size_input_1_7_V_V.to_string().c_str());
		    aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, "\n");
     }

		tcl_file.set_num(aesl_tmp_70 - aesl_tmp_71, &tcl_file.input_1_7_V_V_depth);
		sprintf(tvin_input_1_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_1_7_V_V, tvin_input_1_7_V_V);
		aesl_fh.write(WRAPC_STREAM_INGRESS_STATUS_input_1_7_V_V, tvin_input_1_7_V_V);

		// release memory allocation
		delete [] input_1_7_V_V_tvin_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_in_input_1_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_7_V_V, wrapc_stream_size_in_input_1_7_V_V);
		sprintf(wrapc_stream_size_in_input_1_7_V_V, "%d\n", aesl_tmp_70 - aesl_tmp_71);
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_7_V_V, wrapc_stream_size_in_input_1_7_V_V);
		sprintf(wrapc_stream_size_in_input_1_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_IN_input_1_7_V_V, wrapc_stream_size_in_input_1_7_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_0_V_V, tvout_layer2_out_0_V_V);

		sc_bv<16>* layer2_out_0_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_73 - aesl_tmp_74];

		// RTL Name: layer2_out_0_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_74) => (aesl_tmp_73 - 1) @ (1)
					for (int i_0 = aesl_tmp_74; i_0 <= aesl_tmp_73 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_72[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_72[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_72[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_72[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_72[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_0_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_73 - aesl_tmp_74; i++)
		{
			sprintf(tvout_layer2_out_0_V_V, "%s\n", (layer2_out_0_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_0_V_V, tvout_layer2_out_0_V_V);
		}

		tcl_file.set_num(aesl_tmp_73 - aesl_tmp_74, &tcl_file.layer2_out_0_V_V_depth);
		sprintf(tvout_layer2_out_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_0_V_V, tvout_layer2_out_0_V_V);

		// release memory allocation
		delete [] layer2_out_0_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_0_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, wrapc_stream_size_out_layer2_out_0_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_0_V_V, "%d\n", aesl_tmp_73 - aesl_tmp_74);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, wrapc_stream_size_out_layer2_out_0_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_0_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_0_V_V, wrapc_stream_size_out_layer2_out_0_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_1_V_V, tvout_layer2_out_1_V_V);

		sc_bv<16>* layer2_out_1_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_76 - aesl_tmp_77];

		// RTL Name: layer2_out_1_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_77) => (aesl_tmp_76 - 1) @ (1)
					for (int i_0 = aesl_tmp_77; i_0 <= aesl_tmp_76 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_75[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_75[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_75[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_75[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_75[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_1_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_76 - aesl_tmp_77; i++)
		{
			sprintf(tvout_layer2_out_1_V_V, "%s\n", (layer2_out_1_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_1_V_V, tvout_layer2_out_1_V_V);
		}

		tcl_file.set_num(aesl_tmp_76 - aesl_tmp_77, &tcl_file.layer2_out_1_V_V_depth);
		sprintf(tvout_layer2_out_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_1_V_V, tvout_layer2_out_1_V_V);

		// release memory allocation
		delete [] layer2_out_1_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_1_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_1_V_V, wrapc_stream_size_out_layer2_out_1_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_1_V_V, "%d\n", aesl_tmp_76 - aesl_tmp_77);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_1_V_V, wrapc_stream_size_out_layer2_out_1_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_1_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_1_V_V, wrapc_stream_size_out_layer2_out_1_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_2_V_V, tvout_layer2_out_2_V_V);

		sc_bv<16>* layer2_out_2_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_79 - aesl_tmp_80];

		// RTL Name: layer2_out_2_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_80) => (aesl_tmp_79 - 1) @ (1)
					for (int i_0 = aesl_tmp_80; i_0 <= aesl_tmp_79 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_78[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_78[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_78[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_78[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_78[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_2_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_79 - aesl_tmp_80; i++)
		{
			sprintf(tvout_layer2_out_2_V_V, "%s\n", (layer2_out_2_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_2_V_V, tvout_layer2_out_2_V_V);
		}

		tcl_file.set_num(aesl_tmp_79 - aesl_tmp_80, &tcl_file.layer2_out_2_V_V_depth);
		sprintf(tvout_layer2_out_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_2_V_V, tvout_layer2_out_2_V_V);

		// release memory allocation
		delete [] layer2_out_2_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_2_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_2_V_V, wrapc_stream_size_out_layer2_out_2_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_2_V_V, "%d\n", aesl_tmp_79 - aesl_tmp_80);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_2_V_V, wrapc_stream_size_out_layer2_out_2_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_2_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_2_V_V, wrapc_stream_size_out_layer2_out_2_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_3_V_V, tvout_layer2_out_3_V_V);

		sc_bv<16>* layer2_out_3_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_82 - aesl_tmp_83];

		// RTL Name: layer2_out_3_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_83) => (aesl_tmp_82 - 1) @ (1)
					for (int i_0 = aesl_tmp_83; i_0 <= aesl_tmp_82 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_81[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_81[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_81[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_81[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_81[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_3_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_82 - aesl_tmp_83; i++)
		{
			sprintf(tvout_layer2_out_3_V_V, "%s\n", (layer2_out_3_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_3_V_V, tvout_layer2_out_3_V_V);
		}

		tcl_file.set_num(aesl_tmp_82 - aesl_tmp_83, &tcl_file.layer2_out_3_V_V_depth);
		sprintf(tvout_layer2_out_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_3_V_V, tvout_layer2_out_3_V_V);

		// release memory allocation
		delete [] layer2_out_3_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_3_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_3_V_V, wrapc_stream_size_out_layer2_out_3_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_3_V_V, "%d\n", aesl_tmp_82 - aesl_tmp_83);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_3_V_V, wrapc_stream_size_out_layer2_out_3_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_3_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_3_V_V, wrapc_stream_size_out_layer2_out_3_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_4_V_V, tvout_layer2_out_4_V_V);

		sc_bv<16>* layer2_out_4_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_85 - aesl_tmp_86];

		// RTL Name: layer2_out_4_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_86) => (aesl_tmp_85 - 1) @ (1)
					for (int i_0 = aesl_tmp_86; i_0 <= aesl_tmp_85 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_84[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_84[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_84[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_84[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_84[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_4_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_85 - aesl_tmp_86; i++)
		{
			sprintf(tvout_layer2_out_4_V_V, "%s\n", (layer2_out_4_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_4_V_V, tvout_layer2_out_4_V_V);
		}

		tcl_file.set_num(aesl_tmp_85 - aesl_tmp_86, &tcl_file.layer2_out_4_V_V_depth);
		sprintf(tvout_layer2_out_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_4_V_V, tvout_layer2_out_4_V_V);

		// release memory allocation
		delete [] layer2_out_4_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_4_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_4_V_V, wrapc_stream_size_out_layer2_out_4_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_4_V_V, "%d\n", aesl_tmp_85 - aesl_tmp_86);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_4_V_V, wrapc_stream_size_out_layer2_out_4_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_4_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_4_V_V, wrapc_stream_size_out_layer2_out_4_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_5_V_V, tvout_layer2_out_5_V_V);

		sc_bv<16>* layer2_out_5_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_88 - aesl_tmp_89];

		// RTL Name: layer2_out_5_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_89) => (aesl_tmp_88 - 1) @ (1)
					for (int i_0 = aesl_tmp_89; i_0 <= aesl_tmp_88 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_87[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_87[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_87[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_87[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_87[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_5_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_88 - aesl_tmp_89; i++)
		{
			sprintf(tvout_layer2_out_5_V_V, "%s\n", (layer2_out_5_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_5_V_V, tvout_layer2_out_5_V_V);
		}

		tcl_file.set_num(aesl_tmp_88 - aesl_tmp_89, &tcl_file.layer2_out_5_V_V_depth);
		sprintf(tvout_layer2_out_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_5_V_V, tvout_layer2_out_5_V_V);

		// release memory allocation
		delete [] layer2_out_5_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_5_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_5_V_V, wrapc_stream_size_out_layer2_out_5_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_5_V_V, "%d\n", aesl_tmp_88 - aesl_tmp_89);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_5_V_V, wrapc_stream_size_out_layer2_out_5_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_5_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_5_V_V, wrapc_stream_size_out_layer2_out_5_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_6_V_V, tvout_layer2_out_6_V_V);

		sc_bv<16>* layer2_out_6_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_91 - aesl_tmp_92];

		// RTL Name: layer2_out_6_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_92) => (aesl_tmp_91 - 1) @ (1)
					for (int i_0 = aesl_tmp_92; i_0 <= aesl_tmp_91 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_90[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_90[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_90[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_90[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_90[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_6_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_91 - aesl_tmp_92; i++)
		{
			sprintf(tvout_layer2_out_6_V_V, "%s\n", (layer2_out_6_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_6_V_V, tvout_layer2_out_6_V_V);
		}

		tcl_file.set_num(aesl_tmp_91 - aesl_tmp_92, &tcl_file.layer2_out_6_V_V_depth);
		sprintf(tvout_layer2_out_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_6_V_V, tvout_layer2_out_6_V_V);

		// release memory allocation
		delete [] layer2_out_6_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_6_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_6_V_V, wrapc_stream_size_out_layer2_out_6_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_6_V_V, "%d\n", aesl_tmp_91 - aesl_tmp_92);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_6_V_V, wrapc_stream_size_out_layer2_out_6_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_6_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_6_V_V, wrapc_stream_size_out_layer2_out_6_V_V);

		// [[transaction]]
		sprintf(tvout_layer2_out_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_7_V_V, tvout_layer2_out_7_V_V);

		sc_bv<16>* layer2_out_7_V_V_tvout_wrapc_buffer = new sc_bv<16>[aesl_tmp_94 - aesl_tmp_95];

		// RTL Name: layer2_out_7_V_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer2_out.V.V(15, 0)
				{
					// carray: (aesl_tmp_95) => (aesl_tmp_94 - 1) @ (1)
					for (int i_0 = aesl_tmp_95; i_0 <= aesl_tmp_94 - 1; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : aesl_tmp_93[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : aesl_tmp_93[0]
						// regulate_c_name       : layer2_out_V_V
						// input_type_conversion : (aesl_tmp_93[i_0]).range().to_string(SC_BIN).c_str()
						if (&(aesl_tmp_93[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer2_out_V_V_tmp_mem;
							layer2_out_V_V_tmp_mem = (aesl_tmp_93[i_0]).range().to_string(SC_BIN).c_str();
							layer2_out_7_V_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer2_out_V_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < aesl_tmp_94 - aesl_tmp_95; i++)
		{
			sprintf(tvout_layer2_out_7_V_V, "%s\n", (layer2_out_7_V_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer2_out_7_V_V, tvout_layer2_out_7_V_V);
		}

		tcl_file.set_num(aesl_tmp_94 - aesl_tmp_95, &tcl_file.layer2_out_7_V_V_depth);
		sprintf(tvout_layer2_out_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer2_out_7_V_V, tvout_layer2_out_7_V_V);

		// release memory allocation
		delete [] layer2_out_7_V_V_tvout_wrapc_buffer;

		// dump stream size
		sprintf(wrapc_stream_size_out_layer2_out_7_V_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_7_V_V, wrapc_stream_size_out_layer2_out_7_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_7_V_V, "%d\n", aesl_tmp_94 - aesl_tmp_95);
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_7_V_V, wrapc_stream_size_out_layer2_out_7_V_V);
		sprintf(wrapc_stream_size_out_layer2_out_7_V_V, "[[/transaction]] \n");
		aesl_fh.write(WRAPC_STREAM_SIZE_OUT_layer2_out_7_V_V, wrapc_stream_size_out_layer2_out_7_V_V);

		// [[transaction]]
		sprintf(tvout_const_size_in_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		sc_bv<16>* const_size_in_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_in_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_in_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_in_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_in_1
						// regulate_c_name       : const_size_in_1
						// input_type_conversion : const_size_in_1
						if (&(const_size_in_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_in_1_tmp_mem;
							const_size_in_1_tmp_mem = const_size_in_1;
							const_size_in_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_in_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_in_1, "%s\n", (const_size_in_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_in_1_depth);
		sprintf(tvout_const_size_in_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_in_1, tvout_const_size_in_1);

		// release memory allocation
		delete [] const_size_in_1_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_const_size_out_1, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		sc_bv<16>* const_size_out_1_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: const_size_out_1
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: const_size_out_1(15, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : const_size_out_1
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : const_size_out_1
						// regulate_c_name       : const_size_out_1
						// input_type_conversion : const_size_out_1
						if (&(const_size_out_1) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> const_size_out_1_tmp_mem;
							const_size_out_1_tmp_mem = const_size_out_1;
							const_size_out_1_tvout_wrapc_buffer[hls_map_index].range(15, 0) = const_size_out_1_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_const_size_out_1, "%s\n", (const_size_out_1_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);
		}

		tcl_file.set_num(1, &tcl_file.const_size_out_1_depth);
		sprintf(tvout_const_size_out_1, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_const_size_out_1, tvout_const_size_out_1);

		// release memory allocation
		delete [] const_size_out_1_tvout_wrapc_buffer;

		// push back output stream: "layer2_out[0]"
		for (int i = 0; i < aesl_tmp_73; i++)
		{
			layer2_out[0].write(aesl_tmp_72[i]);
		}

		// push back output stream: "layer2_out[1]"
		for (int i = 0; i < aesl_tmp_76; i++)
		{
			layer2_out[1].write(aesl_tmp_75[i]);
		}

		// push back output stream: "layer2_out[2]"
		for (int i = 0; i < aesl_tmp_79; i++)
		{
			layer2_out[2].write(aesl_tmp_78[i]);
		}

		// push back output stream: "layer2_out[3]"
		for (int i = 0; i < aesl_tmp_82; i++)
		{
			layer2_out[3].write(aesl_tmp_81[i]);
		}

		// push back output stream: "layer2_out[4]"
		for (int i = 0; i < aesl_tmp_85; i++)
		{
			layer2_out[4].write(aesl_tmp_84[i]);
		}

		// push back output stream: "layer2_out[5]"
		for (int i = 0; i < aesl_tmp_88; i++)
		{
			layer2_out[5].write(aesl_tmp_87[i]);
		}

		// push back output stream: "layer2_out[6]"
		for (int i = 0; i < aesl_tmp_91; i++)
		{
			layer2_out[6].write(aesl_tmp_90[i]);
		}

		// push back output stream: "layer2_out[7]"
		for (int i = 0; i < aesl_tmp_94; i++)
		{
			layer2_out[7].write(aesl_tmp_93[i]);
		}

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "input_1_0_V_V"
		delete [] tvin_input_1_0_V_V;
		delete [] wrapc_stream_size_in_input_1_0_V_V;
		// release memory allocation: "input_1_1_V_V"
		delete [] tvin_input_1_1_V_V;
		delete [] wrapc_stream_size_in_input_1_1_V_V;
		// release memory allocation: "input_1_2_V_V"
		delete [] tvin_input_1_2_V_V;
		delete [] wrapc_stream_size_in_input_1_2_V_V;
		// release memory allocation: "input_1_3_V_V"
		delete [] tvin_input_1_3_V_V;
		delete [] wrapc_stream_size_in_input_1_3_V_V;
		// release memory allocation: "input_1_4_V_V"
		delete [] tvin_input_1_4_V_V;
		delete [] wrapc_stream_size_in_input_1_4_V_V;
		// release memory allocation: "input_1_5_V_V"
		delete [] tvin_input_1_5_V_V;
		delete [] wrapc_stream_size_in_input_1_5_V_V;
		// release memory allocation: "input_1_6_V_V"
		delete [] tvin_input_1_6_V_V;
		delete [] wrapc_stream_size_in_input_1_6_V_V;
		// release memory allocation: "input_1_7_V_V"
		delete [] tvin_input_1_7_V_V;
		delete [] wrapc_stream_size_in_input_1_7_V_V;
		// release memory allocation: "layer2_out_0_V_V"
		delete [] tvout_layer2_out_0_V_V;
		delete [] tvin_layer2_out_0_V_V;
		delete [] wrapc_stream_size_out_layer2_out_0_V_V;
		// release memory allocation: "layer2_out_1_V_V"
		delete [] tvout_layer2_out_1_V_V;
		delete [] tvin_layer2_out_1_V_V;
		delete [] wrapc_stream_size_out_layer2_out_1_V_V;
		// release memory allocation: "layer2_out_2_V_V"
		delete [] tvout_layer2_out_2_V_V;
		delete [] tvin_layer2_out_2_V_V;
		delete [] wrapc_stream_size_out_layer2_out_2_V_V;
		// release memory allocation: "layer2_out_3_V_V"
		delete [] tvout_layer2_out_3_V_V;
		delete [] tvin_layer2_out_3_V_V;
		delete [] wrapc_stream_size_out_layer2_out_3_V_V;
		// release memory allocation: "layer2_out_4_V_V"
		delete [] tvout_layer2_out_4_V_V;
		delete [] tvin_layer2_out_4_V_V;
		delete [] wrapc_stream_size_out_layer2_out_4_V_V;
		// release memory allocation: "layer2_out_5_V_V"
		delete [] tvout_layer2_out_5_V_V;
		delete [] tvin_layer2_out_5_V_V;
		delete [] wrapc_stream_size_out_layer2_out_5_V_V;
		// release memory allocation: "layer2_out_6_V_V"
		delete [] tvout_layer2_out_6_V_V;
		delete [] tvin_layer2_out_6_V_V;
		delete [] wrapc_stream_size_out_layer2_out_6_V_V;
		// release memory allocation: "layer2_out_7_V_V"
		delete [] tvout_layer2_out_7_V_V;
		delete [] tvin_layer2_out_7_V_V;
		delete [] wrapc_stream_size_out_layer2_out_7_V_V;
		// release memory allocation: "const_size_in_1"
		delete [] tvout_const_size_in_1;
		// release memory allocation: "const_size_out_1"
		delete [] tvout_const_size_out_1;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

