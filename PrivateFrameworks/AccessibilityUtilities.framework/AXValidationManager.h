/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXValidationManager : NSObject {
    NSMutableArray * _consoleErrorMessages;
    bool  _debugBuild;
    bool  _forceDoNotReport;
    unsigned long long  _numberOfValidationErrors;
    NSString * _overrideProcessName;
    bool  _shouldCrashOnError;
    bool  _shouldLogToConsole;
    bool  _shouldReportToServer;
    <AXValidationReportingServices> * _validationReportingServices;
    NSString * _validationTargetName;
}

@property (nonatomic, retain) NSMutableArray *consoleErrorMessages;
@property (getter=isDebugBuild, nonatomic) bool debugBuild;
@property (nonatomic) bool forceDoNotReport;
@property (nonatomic) unsigned long long numberOfValidationErrors;
@property (nonatomic, copy) NSString *overrideProcessName;
@property (nonatomic) bool shouldCrashOnError;
@property (nonatomic) bool shouldLogToConsole;
@property (nonatomic) bool shouldReportToServer;
@property (nonatomic, retain) <AXValidationReportingServices> *validationReportingServices;
@property (nonatomic, copy) NSString *validationTargetName;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char *)arg4 argList:(char *)arg5;
- (bool)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4;
- (bool)_client:(id)arg1 validateClass:(id)arg2 hasMethod:(id)arg3 methodType:(int)arg4 returnType:(id)arg5 arguments:(id)arg6;
- (void)_printConsoleReport:(bool)arg1 isDelayed:(bool)arg2;
- (bool)client:(id)arg1 validateClass:(id)arg2;
- (bool)client:(id)arg1 validateClass:(id)arg2 conformsToProtocol:(id)arg3;
- (bool)client:(id)arg1 validateClass:(id)arg2 hasClassMethod:(id)arg3 withFullSignature:(const char *)arg4;
- (bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char *)arg4;
- (bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceMethod:(id)arg3 withFullSignature:(const char *)arg4 argList:(char *)arg5;
- (bool)client:(id)arg1 validateClass:(id)arg2 hasInstanceVariable:(id)arg3 withType:(const char *)arg4;
- (bool)client:(id)arg1 validateClass:(id)arg2 hasProperty:(id)arg3 withType:(const char *)arg4;
- (bool)client:(id)arg1 validateClass:(id)arg2 isKindOfClass:(id)arg3;
- (bool)client:(id)arg1 validateProtocol:(id)arg2 conformsToProtocol:(id)arg3;
- (bool)client:(id)arg1 validateProtocol:(id)arg2 hasMethod:(id)arg3 isInstanceMethod:(bool)arg4 isRequired:(bool)arg5;
- (bool)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalClassMethod:(id)arg3;
- (bool)client:(id)arg1 validateProtocol:(id)arg2 hasOptionalInstanceMethod:(id)arg3;
- (bool)client:(id)arg1 validateProtocol:(id)arg2 hasProperty:(id)arg3;
- (bool)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredClassMethod:(id)arg3;
- (bool)client:(id)arg1 validateProtocol:(id)arg2 hasRequiredInstanceMethod:(id)arg3;
- (id)consoleErrorMessages;
- (bool)forceDoNotReport;
- (id)init;
- (void)installSafeCategories:(id /* block */)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4;
- (void)installSafeCategories:(id /* block */)arg1 afterDelay:(double)arg2 validationTargetName:(id)arg3 overrideProcessName:(id)arg4 forceDoNotReport:(bool)arg5;
- (bool)installSafeCategory:(id)arg1;
- (bool)installSafeCategory:(id)arg1 canInteractWithTargetClass:(bool)arg2;
- (bool)isDebugBuild;
- (unsigned long long)numberOfValidationErrors;
- (id)overrideProcessName;
- (void)performValidations:(id /* block */)arg1 withPreValidationHandler:(id /* block */)arg2 postValidationHandler:(id /* block */)arg3;
- (void)performValidations:(id /* block */)arg1 withPreValidationHandler:(id /* block */)arg2 postValidationHandler:(id /* block */)arg3 safeCategoryInstallationHandler:(id /* block */)arg4;
- (void)sendExceptionForInstallingSafeCategory:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeBlock:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendExceptionForSafeIVarKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendExceptionForSafeValueKey:(id)arg1 onTarget:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendFailedAssertionWithErrorMessage:(id)arg1 overrideProcessName:(id)arg2;
- (void)sendFailedTestCase:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendGenericReport:(id)arg1 withTag:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3;
- (void)sendValidateExceptionForClass:(id)arg1 hasClassMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasInstanceVariable:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForClass:(id)arg1 isKindOfClass:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 conformsToProtocol:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasMethod:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidateExceptionForProtocol:(id)arg1 hasProperty:(id)arg2 errorMessage:(id)arg3 overrideProcessName:(id)arg4;
- (void)sendValidationSuccessForProcessName:(id)arg1;
- (void)setConsoleErrorMessages:(id)arg1;
- (void)setDebugBuild:(bool)arg1;
- (void)setForceDoNotReport:(bool)arg1;
- (void)setNumberOfValidationErrors:(unsigned long long)arg1;
- (void)setOverrideProcessName:(id)arg1;
- (void)setShouldCrashOnError:(bool)arg1;
- (void)setShouldLogToConsole:(bool)arg1;
- (void)setShouldReportToServer:(bool)arg1;
- (void)setValidationReportingServices:(id)arg1;
- (void)setValidationTargetName:(id)arg1;
- (bool)shouldCrashOnError;
- (bool)shouldLogToConsole;
- (bool)shouldReportToServer;
- (bool)validateClass:(id)arg1;
- (bool)validateClass:(id)arg1 conformsToProtocol:(id)arg2;
- (bool)validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(const char *)arg3;
- (bool)validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(const char *)arg3;
- (bool)validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(const char *)arg3;
- (bool)validateClass:(id)arg1 hasProperty:(id)arg2 withType:(const char *)arg3;
- (bool)validateClass:(id)arg1 isKindOfClass:(id)arg2;
- (bool)validateProtocol:(id)arg1 conformsToProtocol:(id)arg2;
- (bool)validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(bool)arg3 isRequired:(bool)arg4;
- (bool)validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2;
- (bool)validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2;
- (bool)validateProtocol:(id)arg1 hasProperty:(id)arg2;
- (bool)validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2;
- (bool)validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2;
- (id)validationReportingServices;
- (id)validationTargetName;

@end
