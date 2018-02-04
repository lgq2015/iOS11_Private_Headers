/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration> {
    NSMutableArray * mKeyOrder;
    NSMutableDictionary * mStore;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)dictionary;
+ (id)dictionaryWithMutableDictionaryStore:(id)arg1;

- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithMutableDictionaryStore:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
