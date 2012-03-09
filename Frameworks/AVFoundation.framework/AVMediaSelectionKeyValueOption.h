/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSString, NSDictionary;

@interface AVMediaSelectionKeyValueOption : AVMediaSelectionOption  {
    id _groupID;
    NSString *_mediaType;
    NSDictionary *_dictionary;
    AVWeakReference *_weakReferenceToGroup;
}


- (id)propertyList;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)groupID;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)mediaSubTypes;
- (id)_ancillaryDescription;
- (id)initWithDictionary:(id)arg1 group:(id)arg2;
- (BOOL)_isDesignatedDefault;
- (id)optionID;
- (BOOL)isPlayable;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)locale;
- (id)group;
- (id)dictionary;
- (id)mediaType;

@end