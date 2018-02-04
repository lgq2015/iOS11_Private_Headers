/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecRowCardSection : WBSParsecCardSection {
    NSString * _key;
    bool  _keyCanWrap;
    NSNumber * _keyWeight;
    NSString * _value;
    bool  _valueCanWrap;
    WBSParsecImageRepresentation * _valueImage;
    long long  _valueImageAlignment;
    NSNumber * _valueWeight;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) bool keyCanWrap;
@property (nonatomic, readonly) NSNumber *keyWeight;
@property (nonatomic, readonly, copy) NSString *value;
@property (nonatomic, readonly) bool valueCanWrap;
@property (nonatomic, readonly) WBSParsecImageRepresentation *valueImage;
@property (nonatomic, readonly) long long valueImageAlignment;
@property (nonatomic, readonly) NSNumber *valueWeight;

+ (id)_specializedCardSectionSchema;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)key;
- (bool)keyCanWrap;
- (id)keyWeight;
- (id)value;
- (bool)valueCanWrap;
- (id)valueImage;
- (long long)valueImageAlignment;
- (id)valueWeight;

@end
