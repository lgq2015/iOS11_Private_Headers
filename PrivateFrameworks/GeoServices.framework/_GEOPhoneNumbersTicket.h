/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket {
    bool  _allowCellularDataForLookup;
    NSArray * _phoneNumbers;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
