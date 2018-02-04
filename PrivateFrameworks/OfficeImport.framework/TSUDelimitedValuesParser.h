/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUDelimitedValuesParser : NSObject {
    unsigned short * _buffer;
    unsigned long long  _bufferLength;
    struct { 
        unsigned long long numberOfColumns; 
        unsigned long long numberOfRows; 
        bool isConstantColumnCount; 
    }  _columnRowSize;
    bool  _freeWhenDone;
    bool  _isSizeSet;
    unsigned short  _separator;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; bool x3; } columnRowSize;

+ (bool)coerceString:(id)arg1 withLocale:(id)arg2 toCurrencyFormat:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; struct { double x_6_3_1; double x_6_3_2; double x_6_3_3; int x_6_3_4; unsigned int x_6_3_5 : 2; unsigned int x_6_3_6 : 2; } x_4_2_6; struct { int x_7_3_1; unsigned int x_7_3_2; id x_7_3_3; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_7_3_4; } x_4_2_7; } x_2_1_4; } x2; }*)arg3 value:(double*)arg4;
+ (bool)coerceString:(id)arg1 withLocale:(id)arg2 toNumberFormat:(struct { int x1; union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 8; unsigned int x_1_2_3 : 3; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; } x_2_1_1; struct { unsigned int x_2_2_1 : 8; } x_2_1_2; struct { unsigned int x_3_2_1 : 8; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 1; } x_2_1_3; struct { unsigned int x_4_2_1 : 1; unsigned int x_4_2_2 : 1; id x_4_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_4_2_4; struct { id x_5_3_1; unsigned int x_5_3_2; unsigned char x_5_3_3; } x_4_2_5; struct { double x_6_3_1; double x_6_3_2; double x_6_3_3; int x_6_3_4; unsigned int x_6_3_5 : 2; unsigned int x_6_3_6 : 2; } x_4_2_6; struct { int x_7_3_1; unsigned int x_7_3_2; id x_7_3_3; /* Warning: Unrecognized filer type: ')' using 'void*' */ void*x_7_3_4; } x_4_2_7; } x_2_1_4; } x2; }*)arg3 value:(double*)arg4;

- (unsigned long long)bufferSize;
- (struct { unsigned long long x1; unsigned long long x2; bool x3; })columnRowSize;
- (void)dealloc;
- (id)initWithBuffer:(unsigned short*)arg1 length:(unsigned long long)arg2 separator:(unsigned short)arg3 freeWhenDone:(bool)arg4;
- (id)initWithContentsFromProvider:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithString:(id)arg1 separator:(unsigned short)arg2;
- (struct { unsigned long long x1; unsigned long long x2; bool x3; })parseColumnRowSize;
- (struct { unsigned long long x1; unsigned long long x2; bool x3; })parseColumnRowSizeWithSeparator:(unsigned short)arg1;
- (void)parseRawStringsWithBlock:(id /* block */)arg1;
- (void)parseStringsWithBlock:(id /* block */)arg1;
- (void)setColumnRowSize:(struct { unsigned long long x1; unsigned long long x2; bool x3; })arg1;

@end
