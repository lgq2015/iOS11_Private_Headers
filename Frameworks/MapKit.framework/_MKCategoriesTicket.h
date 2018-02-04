/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKCategoriesTicket : NSObject <MKMapServiceCategoriesTicket> {
    <GEOMapServiceCategoriesTicket> * _ticket;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTicket:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (id)traits;

@end
