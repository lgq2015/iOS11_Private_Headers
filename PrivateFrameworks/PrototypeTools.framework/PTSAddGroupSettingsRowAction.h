/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSAddGroupSettingsRowAction : PTSRowAction {
    NSString * _groupKeyPath;
    Class  _settingsClass;
}

@property (nonatomic, copy) NSString *groupKeyPath;
@property (nonatomic, retain) Class settingsClass;

+ (id)actionWithGroupKeyPath:(id)arg1 settingsClass:(Class)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupKeyPath;
- (id)init;
- (void)resolveTemplatesWithIndex:(unsigned long long)arg1;
- (void)setGroupKeyPath:(id)arg1;
- (void)setSettingsClass:(Class)arg1;
- (Class)settingsClass;

@end
