/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKSearch : NSObject {
    id /* block */  _hitBlock;
    bool  _isComplete;
    unsigned long long  _options;
    NSString * _string;
}

@property (nonatomic, copy) id /* block */ hitBlock;
@property (nonatomic) bool isComplete;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSString *string;

- (void)dealloc;
- (id /* block */)hitBlock;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id /* block */)arg3;
- (bool)isComplete;
- (unsigned long long)options;
- (void)setHitBlock:(id /* block */)arg1;
- (void)setIsComplete:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setString:(id)arg1;
- (id)string;

@end
