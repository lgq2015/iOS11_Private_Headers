/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceVenueBrowseItem : NSObject {
    UIImage * _image;
    GEOSearchCategory * _searchCategory;
    NSString * _title;
}

@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) GEOSearchCategory *searchCategory;
@property (nonatomic, readonly) NSString *title;

+ (id)browseItemWithCategory:(id)arg1;
+ (id)imageWithSearchCategory:(id)arg1;

- (void).cxx_destruct;
- (id)image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 searchCategory:(id)arg3;
- (id)searchCategory;
- (id)title;

@end
