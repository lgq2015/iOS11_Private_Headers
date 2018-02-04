/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCLayoutHint : NSObject <TSDHint> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _charRange;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } charRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)archivedHintClass;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRange;
- (id)copyForArchiving;
- (id)firstChildHint;
- (id)init;
- (id)initWithArchive:(const struct TOCLayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isFirstHint;
- (id)lastChildHint;
- (void)offsetByDelta:(int)arg1;
- (bool)overlapsWithSelectionPath:(id)arg1;
- (void)saveToArchive:(struct TOCLayoutHintArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Range {} *x5; }*)arg1 archiver:(id)arg2;

@end
