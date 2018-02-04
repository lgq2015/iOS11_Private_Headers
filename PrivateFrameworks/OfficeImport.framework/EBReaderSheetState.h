/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBReaderSheetState : NSObject {
    unsigned long long  mChartIndex;
    EDSheet * mEDSheet;
    EBReaderState * mReaderState;
    struct map<int, unsigned long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, unsigned long> > > { 
        struct __tree<std::__1::__value_type<int, unsigned long>, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, unsigned long> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, unsigned long>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, unsigned long>, std::__1::less<int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  mSharedFormulas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)edSheet;
- (id)initWithReaderState:(id)arg1;
- (unsigned long long)nextChartIndex;
- (id)readerState;
- (void)reportWorksheetWarning:(id)arg1;
- (id)resources;
- (void)setEDSheet:(id)arg1;
- (void)setSharedFormulaIndex:(unsigned long long)arg1 forRowCol:(int)arg2;
- (unsigned long long)sharedFormulaIndexForRowCol:(int)arg1;
- (id)workbook;
- (struct XlBinaryReader { int (**x1)(); int (**x2)(); int (**x3)(); struct SsrwOORootStorage {} *x4; struct SsrwOOStorage {} *x5; struct XlEshBinaryReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned int x_6_1_12; struct XlReadStgStream {} *x_6_1_13; } x6; struct XlStringExtractor {} *x7; struct XlSheetInfoTable {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; int x34; int x35; int x36; }*)xlReader;

@end
