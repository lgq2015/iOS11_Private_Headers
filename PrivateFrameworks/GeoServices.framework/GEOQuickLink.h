/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOQuickLink : NSObject {
    GEOPDQuickLinkItem * _quickLinkItem;
}

@property (nonatomic, readonly) NSString *quickLinkTitle;
@property (nonatomic, readonly) NSString *quickLinkURLString;

- (void).cxx_destruct;
- (id)initWithQuickLink:(id)arg1;
- (id)quickLinkTitle;
- (id)quickLinkURLString;

@end
