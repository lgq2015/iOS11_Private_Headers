/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPSource : NSObject <NSCopying> {
    NSString * _bundleId;
    NSDate * _date;
    NSString * _documentId;
    NSString * _groupId;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *documentId;
@property (nonatomic, readonly) NSString *groupId;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)documentId;
- (id)groupId;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 date:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSource:(id)arg1;

@end
