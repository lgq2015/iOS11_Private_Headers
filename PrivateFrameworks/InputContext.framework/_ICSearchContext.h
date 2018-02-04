/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICSearchContext : NSObject {
    NSString * _applicationBundleIdentifier;
    NSString * _locale;
    NSArray * _recipients;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSArray *recipients;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)initWithLocale:(id)arg1 recipients:(id)arg2 applicationBundleIdentifier:(id)arg3;
- (id)locale;
- (id)recipients;

@end
