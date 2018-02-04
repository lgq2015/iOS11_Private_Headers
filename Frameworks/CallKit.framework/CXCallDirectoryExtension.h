/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryExtension : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _localizedContainingAppName;
    NSString * _localizedName;
    bool  _onlyExtensionInContainingApp;
    LSPlugInKitProxy * _plugInKitProxy;
    long long  _priority;
    long long  _state;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedContainingAppName;
@property (nonatomic, copy) NSString *localizedName;
@property (getter=isOnlyExtensionInContainingApp, nonatomic) bool onlyExtensionInContainingApp;
@property (nonatomic, retain) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic) long long priority;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isOnlyExtensionInContainingApp;
- (id)localizedContainingAppName;
- (id)localizedName;
- (id)plugInKitProxy;
- (long long)priority;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedContainingAppName:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setOnlyExtensionInContainingApp:(bool)arg1;
- (void)setPlugInKitProxy:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
