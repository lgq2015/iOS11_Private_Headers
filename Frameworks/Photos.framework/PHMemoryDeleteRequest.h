/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemoryDeleteRequest : PHObjectDeleteRequest {
    bool  _clientEntitledToMemoryMutation;
}

@property (nonatomic, readonly) bool clientEntitledToMemoryMutation;

- (bool)clientEntitledToMemoryMutation;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
