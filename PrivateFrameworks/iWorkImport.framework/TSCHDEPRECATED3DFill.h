/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHDEPRECATED3DFill : NSObject <TSSPropertyValueArchiving> {
    TSDFill * mFill;
    TSCH3DFillSetIdentifier * mIdentifier;
    TSCH3DLightingModel * mLightingModel;
}

+ (id)instanceWithArchive:(const struct DEPRECATEDChart3DFillArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct Chart3DLightingModelArchive {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; int x8; unsigned int x9; }*)arg1 unarchiver:(id)arg2;

- (id)convertToTSDFill;
- (void)dealloc;
- (id)initWithArchive:(const struct DEPRECATEDChart3DFillArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct Chart3DLightingModelArchive {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; int x8; unsigned int x9; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct DEPRECATEDChart3DFillArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; struct Chart3DLightingModelArchive {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; int x8; unsigned int x9; }*)arg1 archiver:(id)arg2;

@end
