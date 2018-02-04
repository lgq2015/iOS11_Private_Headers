/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSObfuscatableDescriptionItem : NSObject {
    NSString * _format;
    bool  _obfuscated;
    <NSObject> * _value;
}

@property (nonatomic, retain) NSString *format;
@property (nonatomic) bool obfuscated;
@property (nonatomic, retain) <NSObject> *value;

- (void).cxx_destruct;
- (id)format;
- (id)initWithFormat:(id)arg1 value:(id)arg2 obfuscated:(bool)arg3;
- (bool)obfuscated;
- (void)setFormat:(id)arg1;
- (void)setObfuscated:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
