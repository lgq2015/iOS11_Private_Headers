/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPAudioMetadata : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _accessibilityText;
    NSString * _type;
    unsigned int  _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithDictionary:(id)arg1;
- (id)accessibilityText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAccessibilityText:(id)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (id)type;
- (unsigned int)version;

@end
