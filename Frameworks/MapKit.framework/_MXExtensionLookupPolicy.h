/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionLookupPolicy : NSObject <_MXExtensionLookupPolicy> {
    NSPredicate * _extensionPredicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSPredicate *extensionPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensionPredicate;
- (id)initWithPredicate:(id)arg1;
- (void)setExtensionPredicate:(id)arg1;

@end
