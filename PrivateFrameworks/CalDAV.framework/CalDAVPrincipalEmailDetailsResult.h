/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVPrincipalEmailDetailsResult : NSObject {
    NSString * _displayName;
    NSSet * _preferredAddresses;
    NSURL * _principalURL;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSSet *preferredAddresses;
@property (nonatomic, retain) NSURL *principalURL;

+ (id)resultFromResponseItem:(id)arg1;

- (void).cxx_destruct;
- (id)addresses;
- (id)description;
- (id)displayName;
- (id)preferredAddresses;
- (id)principalURL;
- (void)setDisplayName:(id)arg1;
- (void)setPreferredAddresses:(id)arg1;
- (void)setPrincipalURL:(id)arg1;

@end
