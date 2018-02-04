/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLApprovedItemsFilter : NSObject {
    NSSet * _approvedClientIdentifiers;
    NSSet * _approvedItemIdentifiers;
}

+ (id)sharedFilter;

- (void).cxx_destruct;
- (unsigned long long)approvalStatusForItem:(id)arg1;

@end
