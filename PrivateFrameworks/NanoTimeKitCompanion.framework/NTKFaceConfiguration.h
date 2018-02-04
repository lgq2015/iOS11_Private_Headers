/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _complications;
    NSMutableDictionary * _editModeConfigurations;
    NSMutableDictionary * _metrics;
    NSString * _name;
    bool  _resourceDirectoryExists;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool resourceDirectoryExists;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyComplicationsDescription:(id)arg1;
- (void)_applyCustomizationDescription:(id)arg1 editModeMapping:(id)arg2;
- (void)_applyMetrics:(id)arg1;
- (id)_dateMetricsKeys;
- (void)_enumerateComplicationsWithBlock:(id /* block */)arg1;
- (void)_enumerateEditModeConfigurationsWithBlock:(id /* block */)arg1;
- (void)addConfigurationKeysToJSONDictionary:(id)arg1;
- (void)appendEditModesToDailySnapshotKey:(id)arg1;
- (id)complicationForSlot:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementMetricForKey:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 editModeMapping:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metricForKey:(id)arg1;
- (id)name;
- (id)optionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)resourceDirectoryExists;
- (void)setComplication:(id)arg1 forSlot:(id)arg2;
- (void)setMetric:(id)arg1 forKey:(id)arg2;
- (void)setMetricsFromConfiguration:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)setResourceDirectoryExists:(bool)arg1;
- (id)validationString;

@end