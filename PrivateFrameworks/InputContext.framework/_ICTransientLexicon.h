/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICTransientLexicon : NSObject {
    int  _count;
    unsigned long long  _entryCount;
    struct _LXLexicon { } * _lexicon;
    NSString * _name;
    unsigned char  _typeFlags;
}

@property (nonatomic, readonly) unsigned long long entryCount;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char typeFlags;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (bool)contains:(id)arg1;
- (struct _LXEntry { }*)copyEntryForString:(id)arg1;
- (void)dealloc;
- (unsigned long long)entryCount;
- (id)getEntries;
- (id)getEntryRefCount:(id)arg1;
- (struct _LXLexicon { }*)getLexiconImplementation;
- (id)getSortKeyEquivalents:(id)arg1;
- (id)getUsageCount:(id)arg1;
- (id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2;
- (id)name;
- (void)removeAllEntries;
- (void)removeEntry:(id)arg1;
- (unsigned char)typeFlags;

@end
