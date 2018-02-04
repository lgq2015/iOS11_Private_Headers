/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVPrincipalSearchPropertySet : NSObject {
    NSSet * _stringProperties;
}

@property (nonatomic, retain) NSSet *stringProperties;
@property (nonatomic, readonly) bool supportsPropertySearch;

+ (id)searchSetWithProperties:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSearchProperties:(id)arg1;
- (id)initWithStringProperties:(id)arg1;
- (bool)isEqualToPropertySet:(id)arg1;
- (void)setStringProperties:(id)arg1;
- (id)stringProperties;
- (bool)supportsPropertySearch;
- (bool)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (bool)supportsWellKnownType:(int)arg1;

@end
