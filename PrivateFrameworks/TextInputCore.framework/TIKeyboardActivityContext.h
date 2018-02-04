/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardActivityContext : NSObject {
    unsigned long long  _excessMemoryInBytes;
    unsigned long long  _fromState;
    unsigned long long  _toState;
}

@property (nonatomic) unsigned long long excessMemoryInBytes;
@property (nonatomic) unsigned long long fromState;
@property (nonatomic) unsigned long long toState;

+ (id)contextFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;

- (unsigned long long)excessMemoryInBytes;
- (unsigned long long)fromState;
- (void)setExcessMemoryInBytes:(unsigned long long)arg1;
- (void)setFromState:(unsigned long long)arg1;
- (void)setToState:(unsigned long long)arg1;
- (unsigned long long)toState;

@end
