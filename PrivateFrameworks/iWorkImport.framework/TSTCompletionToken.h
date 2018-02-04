/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCompletionToken : TSTWPTokenAttachment {
    <TSTCanvasReferenceProvider> * mCanvasReferenceProvider;
    NSString * mCompletionText;
    TSTReferenceNode * mEditingReferenceNode;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mPrefixRange;
    TSUColor * mReferenceColor;
    int  mRenderAsTokenType;
}

@property (nonatomic) <TSTCanvasReferenceProvider> *canvasReferenceProvider;
@property (nonatomic, retain) NSString *completionText;
@property (nonatomic, retain) TSTReferenceNode *editingReferenceNode;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } prefixRange;
@property (nonatomic, retain) TSUColor *referenceColor;
@property (nonatomic, readonly) int renderAsTokenType;

- (id)canvasReferenceProvider;
- (id)completionText;
- (id)copyIntoContext:(id)arg1 bakeModes:(bool)arg2;
- (void)dealloc;
- (id)description;
- (id)editingReferenceNode;
- (id)initWithContext:(id)arg1 completionText:(id)arg2;
- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;
- (void)loadFromArchive:(const struct CompletionTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct TokenAttachmentArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)makeTokenReflectChoice:(id)arg1;
- (void)p_createCanvasReference;
- (void)p_removeCanvasReference;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })prefixRange;
- (id)referenceColor;
- (int)renderAsTokenType;
- (void)saveToArchive:(struct CompletionTokenAttachmentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct TokenAttachmentArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; unsigned int x7; unsigned int x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCanvasReferenceProvider:(id)arg1;
- (void)setCompletionText:(id)arg1;
- (void)setEditingReferenceNode:(id)arg1;
- (void)setExpressionNode:(id)arg1;
- (void)setPrefixRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setReferenceColor:(id)arg1;
- (id)tokenText;

@end
