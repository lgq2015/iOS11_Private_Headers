/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKDatabaseManager : NSObject {
    CKContainer * _truthContainer;
}

@property (nonatomic, readonly) CKContainer *truthContainer;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)truthContainer;
- (id)truthDatabase;

@end
