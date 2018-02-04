/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackageDBDelegate : NSObject <CKSQLiteDelegate>

@property (nonatomic, readonly) int userVersion;

- (bool)migrateDatabase:(id)arg1 fromVersion:(int)arg2;
- (int)userVersion;

@end
