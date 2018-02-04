/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
 */

@interface ANNotificationAction : NSObject <NSSecureCoding> {
    bool  _isInternalURL;
    NSDictionary * _options;
    NSURL * _url;
}

@property (nonatomic) bool isInternalURL;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic, copy) NSURL *url;

+ (id)actionForLaunchingApp:(id)arg1;
+ (id)actionForLaunchingApp:(id)arg1 withOptions:(id)arg2;
+ (id)actionForOpeningWebURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedObject:(id)arg1;
- (bool)isInternalURL;
- (id)options;
- (void)perform;
- (void)setIsInternalURL:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
