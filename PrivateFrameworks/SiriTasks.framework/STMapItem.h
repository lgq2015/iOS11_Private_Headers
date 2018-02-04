/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STMapItem : STSiriModelObject {
    NSNumber * _businessID;
    bool  _isCurrentLocation;
    NSNumber * _localSearchProviderID;
    CLLocation * _location;
    NSData * _placeData;
    NSString * _title;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMKMapItem:(id)arg1;

@end
