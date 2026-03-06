// Generator : SpinalHDL v1.10.1    git head : 2527c7c6b0fb0f95e5e1a5722a0be732b364ce43
// Component : ElevatorController

`timescale 1ns/1ps

module ElevatorController (
  input  wire [3:0]    _zz_when_ElevatorController_l44,
  input  wire [3:0]    _zz_when_ElevatorController_l51,
  input  wire          when_ElevatorController_l102,
  input  wire          when_ElevatorController_l57,
  input  wire          _zz_1,
  output wire          _zz_2,
  output wire          _zz_3,
  output wire          _zz_4,
  output wire          _zz_5,
  output wire [1:0]    _zz_6,
  input  wire          clk,
  input  wire          reset
);
  localparam State_idle = 3'd0;
  localparam State_movingUp = 3'd1;
  localparam State_movingDown = 3'd2;
  localparam State_doorOpening = 3'd3;
  localparam State_doorOpenWait = 3'd4;
  localparam State_doorClosing = 3'd5;
  localparam State_emergency = 3'd6;

  reg                 _zz_when_ElevatorController_l65_5;
  reg        [2:0]    switch_ElevatorController_l61;
  reg        [1:0]    _zz_when_ElevatorController_l65;
  reg        [1:0]    _zz_when_ElevatorController_l88;
  reg                 _zz_when_ElevatorController_l65_1;
  reg                 _zz_when_ElevatorController_l65_2;
  reg                 _zz_when_ElevatorController_l65_3;
  reg                 _zz_when_ElevatorController_l65_4;
  reg        [23:0]   _zz_when_ElevatorController_l110;
  wire                when_ElevatorController_l65;
  wire       [3:0]    _zz_7;
  wire                _zz_8;
  wire                _zz_9;
  wire                _zz_10;
  wire                _zz_11;
  wire                when_ElevatorController_l64;
  wire                when_ElevatorController_l69;
  wire                when_ElevatorController_l44;
  wire                when_ElevatorController_l44_1;
  wire                when_ElevatorController_l44_2;
  wire                when_ElevatorController_l44_3;
  wire                when_ElevatorController_l51;
  wire                when_ElevatorController_l51_1;
  wire                when_ElevatorController_l51_2;
  wire                when_ElevatorController_l51_3;
  wire                when_ElevatorController_l71;
  wire                when_ElevatorController_l71_1;
  wire                when_ElevatorController_l71_2;
  wire                when_ElevatorController_l71_3;
  wire                when_ElevatorController_l78;
  wire                when_ElevatorController_l78_1;
  wire                when_ElevatorController_l78_2;
  wire                when_ElevatorController_l78_3;
  wire                when_ElevatorController_l88;
  wire                when_ElevatorController_l95;
  wire                when_ElevatorController_l110;
  wire                when_ElevatorController_l116;
  wire                when_ElevatorController_l122;
  `ifndef SYNTHESIS
  reg [95:0] switch_ElevatorController_l61_string;
  `endif


  always @(*) begin
    case(_zz_when_ElevatorController_l65)
      2'b00 : _zz_when_ElevatorController_l65_5 = _zz_when_ElevatorController_l65_1;
      2'b01 : _zz_when_ElevatorController_l65_5 = _zz_when_ElevatorController_l65_2;
      2'b10 : _zz_when_ElevatorController_l65_5 = _zz_when_ElevatorController_l65_3;
      default : _zz_when_ElevatorController_l65_5 = _zz_when_ElevatorController_l65_4;
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(switch_ElevatorController_l61)
      State_idle : switch_ElevatorController_l61_string = "idle        ";
      State_movingUp : switch_ElevatorController_l61_string = "movingUp    ";
      State_movingDown : switch_ElevatorController_l61_string = "movingDown  ";
      State_doorOpening : switch_ElevatorController_l61_string = "doorOpening ";
      State_doorOpenWait : switch_ElevatorController_l61_string = "doorOpenWait";
      State_doorClosing : switch_ElevatorController_l61_string = "doorClosing ";
      State_emergency : switch_ElevatorController_l61_string = "emergency   ";
      default : switch_ElevatorController_l61_string = "????????????";
    endcase
  end
  `endif

  assign when_ElevatorController_l65 = _zz_when_ElevatorController_l65_5;
  assign _zz_7 = ({3'd0,1'b1} <<< _zz_when_ElevatorController_l65);
  assign _zz_8 = _zz_7[0];
  assign _zz_9 = _zz_7[1];
  assign _zz_10 = _zz_7[2];
  assign _zz_11 = _zz_7[3];
  assign when_ElevatorController_l64 = (((_zz_when_ElevatorController_l65_1 || _zz_when_ElevatorController_l65_2) || _zz_when_ElevatorController_l65_3) || _zz_when_ElevatorController_l65_4);
  assign when_ElevatorController_l69 = ((((_zz_when_ElevatorController_l65_1 && (_zz_when_ElevatorController_l65 < 2'b00)) || (_zz_when_ElevatorController_l65_2 && (_zz_when_ElevatorController_l65 < 2'b01))) || (_zz_when_ElevatorController_l65_3 && (_zz_when_ElevatorController_l65 < 2'b10))) || (_zz_when_ElevatorController_l65_4 && (_zz_when_ElevatorController_l65 < 2'b11)));
  assign when_ElevatorController_l44 = _zz_when_ElevatorController_l44[0];
  assign when_ElevatorController_l44_1 = _zz_when_ElevatorController_l44[1];
  assign when_ElevatorController_l44_2 = _zz_when_ElevatorController_l44[2];
  assign when_ElevatorController_l44_3 = _zz_when_ElevatorController_l44[3];
  assign when_ElevatorController_l51 = _zz_when_ElevatorController_l51[0];
  assign when_ElevatorController_l51_1 = _zz_when_ElevatorController_l51[1];
  assign when_ElevatorController_l51_2 = _zz_when_ElevatorController_l51[2];
  assign when_ElevatorController_l51_3 = _zz_when_ElevatorController_l51[3];
  assign when_ElevatorController_l71 = (_zz_when_ElevatorController_l65_4 && (_zz_when_ElevatorController_l65 < 2'b11));
  assign when_ElevatorController_l71_1 = (_zz_when_ElevatorController_l65_3 && (_zz_when_ElevatorController_l65 < 2'b10));
  assign when_ElevatorController_l71_2 = (_zz_when_ElevatorController_l65_2 && (_zz_when_ElevatorController_l65 < 2'b01));
  assign when_ElevatorController_l71_3 = (_zz_when_ElevatorController_l65_1 && (_zz_when_ElevatorController_l65 < 2'b00));
  assign when_ElevatorController_l78 = (_zz_when_ElevatorController_l65_1 && (2'b00 < _zz_when_ElevatorController_l65));
  assign when_ElevatorController_l78_1 = (_zz_when_ElevatorController_l65_2 && (2'b01 < _zz_when_ElevatorController_l65));
  assign when_ElevatorController_l78_2 = (_zz_when_ElevatorController_l65_3 && (2'b10 < _zz_when_ElevatorController_l65));
  assign when_ElevatorController_l78_3 = (_zz_when_ElevatorController_l65_4 && (2'b11 < _zz_when_ElevatorController_l65));
  assign when_ElevatorController_l88 = ((_zz_when_ElevatorController_l65 == _zz_when_ElevatorController_l88) || when_ElevatorController_l65);
  assign when_ElevatorController_l95 = ((_zz_when_ElevatorController_l65 == _zz_when_ElevatorController_l88) || when_ElevatorController_l65);
  assign when_ElevatorController_l110 = (24'h000032 <= _zz_when_ElevatorController_l110);
  assign when_ElevatorController_l116 = (! when_ElevatorController_l102);
  assign when_ElevatorController_l122 = ((! when_ElevatorController_l57) && (! when_ElevatorController_l102));
  assign _zz_2 = (switch_ElevatorController_l61 == State_movingUp);
  assign _zz_3 = (switch_ElevatorController_l61 == State_movingDown);
  assign _zz_4 = (((switch_ElevatorController_l61 == State_doorOpening) || (switch_ElevatorController_l61 == State_doorOpenWait)) || (switch_ElevatorController_l61 == State_emergency));
  assign _zz_5 = (switch_ElevatorController_l61 == State_doorClosing);
  assign _zz_6 = _zz_when_ElevatorController_l65;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      switch_ElevatorController_l61 <= State_idle;
      _zz_when_ElevatorController_l65 <= 2'b00;
      _zz_when_ElevatorController_l88 <= 2'b00;
      _zz_when_ElevatorController_l65_1 <= 1'b0;
      _zz_when_ElevatorController_l65_2 <= 1'b0;
      _zz_when_ElevatorController_l65_3 <= 1'b0;
      _zz_when_ElevatorController_l65_4 <= 1'b0;
      _zz_when_ElevatorController_l110 <= 24'h000000;
    end else begin
      if(when_ElevatorController_l44) begin
        _zz_when_ElevatorController_l65_1 <= 1'b1;
      end
      if(when_ElevatorController_l44_1) begin
        _zz_when_ElevatorController_l65_2 <= 1'b1;
      end
      if(when_ElevatorController_l44_2) begin
        _zz_when_ElevatorController_l65_3 <= 1'b1;
      end
      if(when_ElevatorController_l44_3) begin
        _zz_when_ElevatorController_l65_4 <= 1'b1;
      end
      if(when_ElevatorController_l51) begin
        _zz_when_ElevatorController_l65 <= 2'b00;
      end
      if(when_ElevatorController_l51_1) begin
        _zz_when_ElevatorController_l65 <= 2'b01;
      end
      if(when_ElevatorController_l51_2) begin
        _zz_when_ElevatorController_l65 <= 2'b10;
      end
      if(when_ElevatorController_l51_3) begin
        _zz_when_ElevatorController_l65 <= 2'b11;
      end
      if(when_ElevatorController_l57) begin
        switch_ElevatorController_l61 <= State_emergency;
        _zz_when_ElevatorController_l65_1 <= 1'b0;
        _zz_when_ElevatorController_l65_2 <= 1'b0;
        _zz_when_ElevatorController_l65_3 <= 1'b0;
        _zz_when_ElevatorController_l65_4 <= 1'b0;
      end else begin
        case(switch_ElevatorController_l61)
          State_idle : begin
            if(when_ElevatorController_l64) begin
              if(when_ElevatorController_l65) begin
                _zz_when_ElevatorController_l88 <= _zz_when_ElevatorController_l65;
                if(_zz_8) begin
                  _zz_when_ElevatorController_l65_1 <= 1'b0;
                end
                if(_zz_9) begin
                  _zz_when_ElevatorController_l65_2 <= 1'b0;
                end
                if(_zz_10) begin
                  _zz_when_ElevatorController_l65_3 <= 1'b0;
                end
                if(_zz_11) begin
                  _zz_when_ElevatorController_l65_4 <= 1'b0;
                end
                switch_ElevatorController_l61 <= State_doorOpening;
              end else begin
                if(when_ElevatorController_l69) begin
                  if(when_ElevatorController_l71) begin
                    _zz_when_ElevatorController_l88 <= 2'b11;
                  end
                  if(when_ElevatorController_l71_1) begin
                    _zz_when_ElevatorController_l88 <= 2'b10;
                  end
                  if(when_ElevatorController_l71_2) begin
                    _zz_when_ElevatorController_l88 <= 2'b01;
                  end
                  if(when_ElevatorController_l71_3) begin
                    _zz_when_ElevatorController_l88 <= 2'b00;
                  end
                  switch_ElevatorController_l61 <= State_movingUp;
                end else begin
                  if(when_ElevatorController_l78) begin
                    _zz_when_ElevatorController_l88 <= 2'b00;
                  end
                  if(when_ElevatorController_l78_1) begin
                    _zz_when_ElevatorController_l88 <= 2'b01;
                  end
                  if(when_ElevatorController_l78_2) begin
                    _zz_when_ElevatorController_l88 <= 2'b10;
                  end
                  if(when_ElevatorController_l78_3) begin
                    _zz_when_ElevatorController_l88 <= 2'b11;
                  end
                  switch_ElevatorController_l61 <= State_movingDown;
                end
              end
            end
          end
          State_movingUp : begin
            if(when_ElevatorController_l88) begin
              if(_zz_8) begin
                _zz_when_ElevatorController_l65_1 <= 1'b0;
              end
              if(_zz_9) begin
                _zz_when_ElevatorController_l65_2 <= 1'b0;
              end
              if(_zz_10) begin
                _zz_when_ElevatorController_l65_3 <= 1'b0;
              end
              if(_zz_11) begin
                _zz_when_ElevatorController_l65_4 <= 1'b0;
              end
              switch_ElevatorController_l61 <= State_doorOpening;
            end
          end
          State_movingDown : begin
            if(when_ElevatorController_l95) begin
              if(_zz_8) begin
                _zz_when_ElevatorController_l65_1 <= 1'b0;
              end
              if(_zz_9) begin
                _zz_when_ElevatorController_l65_2 <= 1'b0;
              end
              if(_zz_10) begin
                _zz_when_ElevatorController_l65_3 <= 1'b0;
              end
              if(_zz_11) begin
                _zz_when_ElevatorController_l65_4 <= 1'b0;
              end
              switch_ElevatorController_l61 <= State_doorOpening;
            end
          end
          State_doorOpening : begin
            if(when_ElevatorController_l102) begin
              _zz_when_ElevatorController_l110 <= 24'h000000;
              switch_ElevatorController_l61 <= State_doorOpenWait;
            end
          end
          State_doorOpenWait : begin
            _zz_when_ElevatorController_l110 <= (_zz_when_ElevatorController_l110 + 24'h000001);
            if(when_ElevatorController_l110) begin
              switch_ElevatorController_l61 <= State_doorClosing;
            end
          end
          State_doorClosing : begin
            if(when_ElevatorController_l116) begin
              switch_ElevatorController_l61 <= State_idle;
            end
          end
          default : begin
            if(when_ElevatorController_l122) begin
              switch_ElevatorController_l61 <= State_idle;
            end
          end
        endcase
      end
    end
  end


endmodule
