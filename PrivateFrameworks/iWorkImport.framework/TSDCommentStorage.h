/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCommentStorage : TSPObject <TSPCopying> {
    TSKAnnotationAuthor * _author;
    NSDate * _creationDate;
    TSDCommentStorage * _parent;
    NSArray * _replies;
    NSString * _text;
}

@property (nonatomic, retain) TSKAnnotationAuthor *author;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) TSDCommentStorage *parent;
@property (nonatomic, retain) NSArray *replies;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)author;
- (bool)canDeleteWithAuthor:(id)arg1 docIsReadOnly:(bool)arg2;
- (bool)canEditWithAuthor:(id)arg1 docIsReadOnly:(bool)arg2;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyByAppendingText:(id)arg1;
- (id)copyWithAuthor:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithDate:(id)arg1;
- (id)copyWithDeletedReply:(id)arg1;
- (id)copyWithEditedReply:(id)arg1;
- (id)copyWithInsertedReply:(id)arg1;
- (id)copyWithReplies:(id)arg1;
- (id)copyWithText:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)creationDateString;
- (id)creationDateStringShort;
- (id)description;
- (id)initWithContext:(id)arg1 author:(id)arg2;
- (id)initWithContext:(id)arg1 text:(id)arg2 creationDate:(id)arg3 author:(id)arg4 replies:(id)arg5;
- (bool)isOwner;
- (bool)isShared;
- (void)loadFromArchive:(const struct CommentStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Date {} *x6; struct Reference {} *x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)matchingReply:(id)arg1;
- (bool)p_canModifyCommentStorageWithAuthor:(id)arg1 isDelete:(bool)arg2 docIsReadOnly:(bool)arg3;
- (bool)p_matchesCommentStorage:(id)arg1;
- (id)parent;
- (id)replies;
- (void)saveToArchive:(struct CommentStorageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Date {} *x6; struct Reference {} *x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setReplies:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
