/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVCalendarUserAddress : NSObject {
    NSURL * _address;
    long long  _preferred;
}

@property (nonatomic, retain) NSURL *address;
@property long long preferred;

+ (id)_minPreferredAddress:(id)arg1;
+ (id)_preferredAddressNoPreferred:(id)arg1;
+ (long long)defaultPreferredAttribute;
+ (id)packCalDAVUserAdress:(id)arg1;
+ (id)preferredAddress:(id)arg1;
+ (id)unpackCalDAVUserAdress:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (long long)compare:(id)arg1;
- (id)initWithAddress:(id)arg1 preferred:(long long)arg2;
- (long long)preferred;
- (void)setAddress:(id)arg1;
- (void)setPreferred:(long long)arg1;

@end
