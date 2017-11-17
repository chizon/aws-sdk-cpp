﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an XML classifier to be updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateXMLClassifierRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API UpdateXMLClassifierRequest
  {
  public:
    UpdateXMLClassifierRequest();
    UpdateXMLClassifierRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    UpdateXMLClassifierRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline UpdateXMLClassifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline UpdateXMLClassifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline UpdateXMLClassifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline UpdateXMLClassifierRequest& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline UpdateXMLClassifierRequest& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>An identifier of the data format that the classifier matches.</p>
     */
    inline UpdateXMLClassifierRequest& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. Note that this cannot be an empty element. It must
     * contain child elements representing fields in the record.</p>
     */
    inline const Aws::String& GetRowTag() const{ return m_rowTag; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. Note that this cannot be an empty element. It must
     * contain child elements representing fields in the record.</p>
     */
    inline void SetRowTag(const Aws::String& value) { m_rowTagHasBeenSet = true; m_rowTag = value; }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. Note that this cannot be an empty element. It must
     * contain child elements representing fields in the record.</p>
     */
    inline void SetRowTag(Aws::String&& value) { m_rowTagHasBeenSet = true; m_rowTag = std::move(value); }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. Note that this cannot be an empty element. It must
     * contain child elements representing fields in the record.</p>
     */
    inline void SetRowTag(const char* value) { m_rowTagHasBeenSet = true; m_rowTag.assign(value); }

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. Note that this cannot be an empty element. It must
     * contain child elements representing fields in the record.</p>
     */
    inline UpdateXMLClassifierRequest& WithRowTag(const Aws::String& value) { SetRowTag(value); return *this;}

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. Note that this cannot be an empty element. It must
     * contain child elements representing fields in the record.</p>
     */
    inline UpdateXMLClassifierRequest& WithRowTag(Aws::String&& value) { SetRowTag(std::move(value)); return *this;}

    /**
     * <p>The XML tag designating the element that contains each record in an XML
     * document being parsed. Note that this cannot be an empty element. It must
     * contain child elements representing fields in the record.</p>
     */
    inline UpdateXMLClassifierRequest& WithRowTag(const char* value) { SetRowTag(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_classification;
    bool m_classificationHasBeenSet;

    Aws::String m_rowTag;
    bool m_rowTagHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
