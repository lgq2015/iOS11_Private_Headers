/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKYelpDeal : NSObject <MKMapItemVendorDeal> {
    NSString * identifier;
    NSString * title;
    NSString * urlString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *urlString;

+ (id)dealWithJSONObject:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)title;
- (id)urlString;

@end
