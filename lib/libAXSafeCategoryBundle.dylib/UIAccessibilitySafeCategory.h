/* made by EzioChiu
   Image: /usr/lib/libAXSafeCategoryBundle.dylib
 */

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic, copy) NSString *accessibilityIdentifier;

+ (void)_addCategoryMethod:(struct objc_method { }*)arg1 toClass:(Class)arg2 isClass:(bool)arg3;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (id)_installLocalValidationMethodOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(bool)arg2;
+ (void)_installSafeCategoryOnClassNamed:(id)arg1;
+ (id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(bool)arg2;
+ (id)_installSafeCategoryValidationMethod;
+ (void)safeCategoryAddDependenciesToCollection:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;

@end
