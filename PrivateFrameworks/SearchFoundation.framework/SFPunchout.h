/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFPunchout : NSObject <NSCopying, NSSecureCoding, SFPunchout> {
    NSString * _actionTarget;
    NSString * _bundleIdentifier;
    NSString * _label;
    NSString * _name;
    NSArray * _urls;
    SFUserActivityData * _userActivityData;
}

@property (nonatomic, copy) NSString *actionTarget;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic, retain) SFUserActivityData *userActivityData;

+ (id)punchoutWithURL:(id)arg1;
+ (id)punchoutWithURLs:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTarget;
- (id)bundleIdentifier;
- (bool)canOpenURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (id)label;
- (id)name;
- (id)preferredOpenableURL;
- (void)setActionTarget:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setUserActivityData:(id)arg1;
- (id)urls;
- (id)userActivityData;

@end
