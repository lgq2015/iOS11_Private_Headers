/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMultiCache : IMMultiDict {
    unsigned long long  _limit;
}

@property (nonatomic) unsigned long long limit;

- (void)dealloc;
- (id)init;
- (unsigned long long)limit;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)setLimit:(unsigned long long)arg1;

@end
