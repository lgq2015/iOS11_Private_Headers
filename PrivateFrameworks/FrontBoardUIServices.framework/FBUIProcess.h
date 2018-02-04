/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUIProcess : FBSProcess <FBUIProcess>

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;

- (bool)isApplicationProcess;
- (bool)isExtensionProcess;
- (bool)isRunning;
- (bool)isSystemApplicationProcess;

@end
