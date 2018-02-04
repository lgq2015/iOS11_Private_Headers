/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraItemProperties : NSObject {
    NSString * _UTI;
    NSDate * _creationDate;
    ICCameraDevice * _device;
    bool  _locked;
    NSDate * _modificationDate;
    NSString * _name;
    ICCameraFolder * _parentFolder;
    NSMutableDictionary * _userData;
}

@property (retain) NSString *UTI;
@property (retain) NSDate *creationDate;
@property ICCameraDevice *device;
@property bool locked;
@property (retain) NSDate *modificationDate;
@property (retain) NSString *name;
@property ICCameraFolder *parentFolder;
@property (retain) NSMutableDictionary *userData;

- (id)UTI;
- (id)creationDate;
- (void)dealloc;
- (id)device;
- (void)finalize;
- (bool)locked;
- (id)modificationDate;
- (id)name;
- (id)parentFolder;
- (void)setCreationDate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentFolder:(id)arg1;
- (void)setUTI:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
