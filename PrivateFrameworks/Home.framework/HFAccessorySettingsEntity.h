/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingsEntity : NSObject {
    NSString * _adapterIdentifier;
    bool  _alwaysShowGroup;
    NSArray * _booleanKeyPathDependencies;
    long long  _interfaceModality;
    NSString * _keyPath;
    NSString * _localizedFooter;
    NSString * _localizedHeader;
    bool  _previewAccessory;
    NSFormatter * _previewValueFormatter;
    NSString * _previewValueKeyPath;
    bool  _requiresDependenciesToShowSetting;
    NSString * _sortKey;
    NSDictionary * _userInfo;
    bool  _wantsSeparateSectionPerGroup;
}

@property (nonatomic, readonly, copy) NSString *adapterIdentifier;
@property (nonatomic, readonly) bool alwaysShowGroup;
@property (nonatomic, readonly, copy) NSArray *booleanKeyPathDependencies;
@property (nonatomic, readonly) long long interfaceModality;
@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly, copy) NSString *localizedFooter;
@property (nonatomic, readonly, copy) NSString *localizedHeader;
@property (nonatomic, readonly) bool previewAccessory;
@property (nonatomic, readonly, copy) NSFormatter *previewValueFormatter;
@property (nonatomic, readonly, copy) NSString *previewValueKeyPath;
@property (nonatomic, readonly) bool requiresDependenciesToShowSetting;
@property (nonatomic, readonly, copy) NSString *sortKey;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) bool wantsSeparateSectionPerGroup;

+ (id)settingsAtURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)adapterIdentifier;
- (bool)alwaysShowGroup;
- (id)booleanKeyPathDependencies;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (long long)interfaceModality;
- (id)keyPath;
- (id)localizedFooter;
- (id)localizedHeader;
- (bool)previewAccessory;
- (id)previewValueFormatter;
- (id)previewValueKeyPath;
- (bool)requiresDependenciesToShowSetting;
- (id)sortKey;
- (id)userInfo;
- (bool)wantsSeparateSectionPerGroup;

@end
