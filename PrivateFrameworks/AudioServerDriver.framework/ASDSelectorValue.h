/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDSelectorValue : NSObject {
    NSString * _name;
    unsigned int  _value;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned int value;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(unsigned int)arg1;
- (unsigned int)value;

@end
