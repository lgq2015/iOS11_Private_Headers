/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearch : NSObject {
    MKLocalSearchRequest * _request;
    <MKMapServiceTicket> * _ticket;
}

@property (getter=isSearching, nonatomic, readonly) bool searching;

- (void).cxx_destruct;
- (void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(id /* block */)arg4 queue:(id)arg5;
- (void)_phoneOnlyStartWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)_startWithCompletionHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)cancel;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (bool)isSearching;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
