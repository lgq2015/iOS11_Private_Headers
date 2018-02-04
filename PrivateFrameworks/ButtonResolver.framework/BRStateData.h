/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
 */

@interface BRStateData : NSObject {
    bool  _enabled;
    NSMutableDictionary * _speedConfigs;
    NSMutableDictionary * _speedSlots;
    unsigned long long  _state;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly) id propertyList;
@property (nonatomic, readonly) NSMutableDictionary *speedConfigs;
@property (nonatomic, readonly) NSMutableDictionary *speedSlots;
@property (nonatomic) unsigned long long state;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)enabled;
- (id)initWithState:(unsigned long long)arg1 enabled:(bool)arg2;
- (id)initWithStateData:(id)arg1;
- (id)propertyList;
- (void)setEnabled:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)speedConfigs;
- (id)speedSlots;
- (unsigned long long)state;

@end
