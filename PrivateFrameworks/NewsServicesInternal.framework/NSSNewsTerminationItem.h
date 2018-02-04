/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
 */

@interface NSSNewsTerminationItem : NSObject <NSCopying> {
    NSString * _bundleID;
    unsigned long long  _processType;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) unsigned long long processType;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithProcessType:(unsigned long long)arg1 bundleID:(id)arg2;
- (unsigned long long)processType;
- (void)setBundleID:(id)arg1;
- (void)setProcessType:(unsigned long long)arg1;

@end
