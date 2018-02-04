/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPDatabaseMigrations : NSObject {
    NSDictionary * _migrations;
}

@property (nonatomic, readonly) unsigned long long maxVersion;
@property (nonatomic, readonly) NSDictionary *migrations;

+ (id)mockMigrationsByAddingQueries:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMigrations:(id)arg1;
- (unsigned long long)maxVersion;
- (id)migrations;

@end
