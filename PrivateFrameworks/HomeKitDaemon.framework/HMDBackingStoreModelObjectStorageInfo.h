/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreModelObjectStorageInfo : HMFObject {
    Class  _classObj;
    id  _defaultValue;
    bool  _defaultValueSet;
    unsigned long long  _logging;
    HMFVersion * _readOnly;
    HMFVersion * _unavailable;
}

@property (nonatomic, readonly) Class classObj;
@property (nonatomic, readonly) id defaultValue;
@property (nonatomic, readonly) bool defaultValueSet;
@property (nonatomic, readonly) unsigned long long logging;
@property (nonatomic, retain) HMFVersion *readOnly;
@property (nonatomic, retain) HMFVersion *unavailable;

+ (id)deprecatedField;
+ (id)infoWithClass:(Class)arg1;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned long long)arg3 readOnly:(id)arg4 unavailable:(id)arg5;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4;

- (void).cxx_destruct;
- (Class)classObj;
- (id)defaultValue;
- (bool)defaultValueSet;
- (id)description;
- (id)initWithClass:(Class)arg1 logging:(unsigned long long)arg2 readOnly:(id)arg3 unavailable:(id)arg4 defaultSet:(bool)arg5 defaultValue:(id)arg6;
- (unsigned long long)logging;
- (id)readOnly;
- (void)setReadOnly:(id)arg1;
- (void)setUnavailable:(id)arg1;
- (id)unavailable;

@end
