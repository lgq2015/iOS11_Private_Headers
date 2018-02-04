/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAShortcutController : TSPObject {
    TSADocumentRoot * _documentRoot;
    NSMutableDictionary * _shortcutToStyleDictionary;
    TSURetainedPointerKeyDictionary * _styleToShortcutDictionary;
}

@property (nonatomic) TSADocumentRoot *documentRoot;
@property (nonatomic, readonly) bool hasShortcuts;

+ (id)localizedStringForShortcut:(id)arg1;

- (void)dealloc;
- (void)documentDidLoad;
- (id)documentRoot;
- (void)documentWillUnload;
- (bool)hasShortcuts;
- (id)initWithDocumentRoot:(id)arg1;
- (void)loadFromArchive:(const struct ShortcutControllerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)removeStylesNotInTheme;
- (void)saveToArchive:(struct ShortcutControllerArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setStyle:(id)arg1 forShortcut:(id)arg2;
- (id)shortcutForStyle:(id)arg1;
- (id)styleForShortcut:(id)arg1;

@end
